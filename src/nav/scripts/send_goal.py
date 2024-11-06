# #!/usr/bin/env python
# import rospy
# from geometry_msgs.msg import PoseStamped
# import Tkinter as tk  


# def send_goal(x, y):
#     goal = PoseStamped()
#     goal.header.frame_id = "map"
#     goal.pose.position.x = x
#     goal.pose.position.y = y
#     goal.pose.orientation.w = 1.0  
#     goal_pub.publish(goal)
#     rospy.loginfo("Goal sent to: {}, {}".format(x, y))


# def start_navigation():
    
#     send_goal(-8.74151802063, -0.674422264099)


# def return_navigation():
    
#     send_goal(8.36627578735, 2.06066083908)


# rospy.init_node('gui_send_goal_node')
# goal_pub = rospy.Publisher('/move_base_simple/goal', PoseStamped, queue_size=10)


# root = tk.Tk()
# root.title("Robot Navigation")


# button_start = tk.Button(root, text="Go", command=start_navigation, width=60, height=30)
# button_start.pack()

# button_return = tk.Button(root, text="back", command=return_navigation, width=60, height=30)
# button_return.pack()


# root.mainloop()

#!/usr/bin/env python
import rospy
from geometry_msgs.msg import PoseStamped
import Tkinter as tk
import tkFont 

def send_goal(x, y):
    goal = PoseStamped()
    goal.header.frame_id = "map"
    goal.pose.position.x = x
    goal.pose.position.y = y
    goal.pose.orientation.w = 1.0
    goal_pub.publish(goal)
    rospy.loginfo("Goal sent to: {}, {}".format(x, y))

def start_navigation():
    send_goal(2.17042517662, 3.83922982216)
def location1():
    send_goal(2.18165040016, -0.467579901218)
def location2():
    send_goal(-1.74355125427, 1.06230521202)
def return_navigation():
    send_goal(8.36627578735, 2.06066083908)

rospy.init_node('gui_send_goal_node')
goal_pub = rospy.Publisher('/move_base_simple/goal', PoseStamped, queue_size=10)

root = tk.Tk()
root.title("Robot Navigation")


large_font = tkFont.Font(size=50)


# button_start = tk.Button(root, text="Go", command=start_navigation, width=50, height=7, font=large_font,
#                          bd=5, relief='raised')
# button_start.pack(pady=10)

# button_return = tk.Button(root, text="Back", command=return_navigation, width=50, height=7, font=large_font,
#                           bd=5, relief='raised')
# button_return.pack(pady=10)
button_start = tk.Button(root, text="table0", command=start_navigation, width=20, height=3, font=large_font,
                          bd=5, relief='raised')
button_start.pack(pady=10)

button_0 = tk.Button(root, text="table1", command=location1, width=20, height=3, font=large_font,
                          bd=5, relief='raised')
button_0.pack(pady=10)

button_1 = tk.Button(root, text="table2", command=location2, width=20, height=3, font=large_font,
                          bd=5, relief='raised')
button_1.pack(pady=10)

root.mainloop()

# import rospy
# from geometry_msgs.msg import PoseStamped
# from std_msgs.msg import Bool
# import Tkinter as tk
# import tkFont


# locations = {
#     "table0": (8.36627578735, 2.06066083908),  
#     "table1": (2.18165040016, -0.467579901218),  
#     "table2": (-1.74355125427, 1.06230521202)    
# }
# goal_queue = []  

# def send_goal(x, y):
#     goal = PoseStamped()
#     goal.header.frame_id = "map"
#     goal.pose.position.x = x
#     goal.pose.position.y = y
#     goal.pose.orientation.w = 1.0
#     goal_pub.publish(goal)
#     rospy.loginfo("Goal sent to: {}, {}".format(x, y))

# def add_goal(location):
    
#     global goal_queue
#     goal_queue.append(locations[location])
#     if len(goal_queue) == 1:  
#         navigate_to_next_goal()

# def navigate_to_next_goal():
    
#     if goal_queue:
#         x, y = goal_queue[0]  
#         send_goal(x, y)
#     else:
#         rospy.loginfo("All destinations reached.")

# def goal_reached_callback(msg):
    
#     if goal_queue:
#         goal_queue.pop(0)  
#     if goal_queue:
#         navigate_to_next_goal()
#     else:
#         show_return_button()  

# def return_to_origin():
    
#     global goal_queue
#     goal_queue = []  
#     send_goal(*locations["table0"])  
#     hide_return_button()

# def show_return_button():
#     button_return.pack(pady=10)

# def hide_return_button():
#     button_return.pack_forget()


# rospy.init_node('gui_send_goal_node')
# goal_pub = rospy.Publisher('/move_base_simple/goal', PoseStamped, queue_size=10)


# rospy.Subscriber('/goal_reached', Bool, goal_reached_callback)


# root = tk.Tk()
# root.title("Robot Navigation")
# large_font = tkFont.Font(size=50)


# button_0 = tk.Button(root, text="table0", command=lambda: return_to_origin(), width=20, height=3, font=large_font,
#                      bd=5, relief='raised')
# button_0.pack(pady=10)

# button_1 = tk.Button(root, text="table1", command=lambda: add_goal("table1"), width=20, height=3, font=large_font,
#                      bd=5, relief='raised')
# button_1.pack(pady=10)

# button_2 = tk.Button(root, text="table2", command=lambda: add_goal("table2"), width=20, height=3, font=large_font,
#                      bd=5, relief='raised')
# button_2.pack(pady=10)


# button_return = tk.Button(root, text="Back to 0 (Original)", command=return_to_origin, width=20, height=3, font=large_font,
#                           bd=5, relief='raised')
# button_return.pack_forget()


# root.mainloop()



