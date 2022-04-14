import playsound


waifu = input("Who is your waifu? ")
if any(srchstr in waifu for srchstr in ('wiz' , 'zerotwo' , 'astolfo' , 'enterprise' ,)):
 print("You're cultured")
elif any(srchstr in waifu for srchstr in ('gabi' , 'ichigo' , 'malty' ,)):
 print("You fucking donkey")
elif any(srchstr in waifu for srchstr in ('megumin' , 'toga' , 'marin' , 'darkness' , 'aqua' , 'kaguya' , 'chika' , 'midari' , 'holo')):
 print("You have good taste")
elif any(srchstr in waifu for srchstr in ('komi' , 'speedwagon' , 'dio' , 'ishigami')):
 print("You are a god")
elif any(srchstr in waifu for srchstr in ('chomosuke' , 'komeko' , 'melty' , 'malty' )):
 print("Bruh, what?")
 playsound.playsound('snd1.mp3')
elif any(srchstr in waifu for srchstr in ('asuna' , 'sylvia' , 'mikasa')):
 print("Meh, alright")
elif any(srchstr in waifu for srchstr in ('bismarck' , 'eugen' , 'selphius' , 'friedrich' , 'elbe')):
 print("Deutschland indeed")
 playsound.playsound('snd2.mp3')
elif any(srchstr in waifu for srchstr in ('giorno')):
 print("GOLDEN WIND")
 playsound.playsound('snd3.mp3')
#elif not {'wiz' , 'zerotwo' , 'astolfo' , 'enterprise' , 'megumin' ,'gabi' , 'ichigo' , 'malty' ,'toga' , 'marin' , 'darkness' , 'aqua' , 'kaguya' , 'chika' , 'midari' , 'holo' , 'komi' , 'speedwagon' , 'dio' , 'ishigami' , 'chomosuke' , 'komeko' , 'chica' , 'freddy' , 'bonnie' , 'vanessa' , 'melty' , 'giorno' , 'asuna' , 'sylvia' , 'mikasa' ,'bismarck' , 'eugen' , 'selphius' , 'friedrich' , 'elbe' }.isdisjoint(waifu.split()):
else:
 print("Sorry, that isn't a valid choice. Please yell at McUberStein to implement it later.")
