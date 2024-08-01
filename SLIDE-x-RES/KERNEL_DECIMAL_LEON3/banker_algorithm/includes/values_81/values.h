#ifndef VALUES
#define VALUES
	enum{size = 30};
	double available[size] = {5652338136579930233, 2925697238934435541, 133606483464071270, 4051856869597585120, 7232265873513018991, 4409851088636952100, 5702370795683229387, 1762693798112482648, 9041152420537645717, 9201035486479236249, 5651040668050271456, 4963555620290088862, 7295960844508573088, 5420068436341955129, 7138456943234064321, 3493725055637395300, 3630484133763980476, 2402440748726824280, 6905242265514792209, 5305651327845019060, 1232827604985304144, 7198741287468011261, 6222430720235744509, 8737096913262647663, 1242455095432605297, 7502967545423508093, 2347936145220874609, 1993459943559511565, 7244561697181140210, 7371821394367654618};
	double allocated[size][size] = {{6919659955400889079, 3726396634009056125, 2729585633778933058, 7985423302279576872, 1724117235985261950, 3325212211030609967, 3966628864873188348, 4808430224203713625, 7771159861627630671, 3774881952887015894, 1728549097577675227, 343747419766776582, 5358613480698015978, 5572219376045811252, 306020874755983053, 5377513784474774758, 979407274545464481, 330632571420162529, 5122791129239530332, 6699919242988091925, 4603405303516287559, 835566550098949734, 685968998050303255, 3490100135779631016, 1458189137488503910, 1695380817001462654, 1886012431530738078, 7528298439220226386, 4427860841365193852, 86547268412505191},{2587206604033050483, 6228663889650602075, 1401933039586823390, 4251033425337316543, 6133983395237024686, 2157872697996450818, 1662196432818129575, 2481784966662972002, 7096145030782460180, 9003438723460567700, 343729870280232287, 8204136884153438138, 644282848156578295, 8210294225047400119, 791415193477169793, 7508369240876847380, 8995232095426239236, 4103009444022528120, 7144180683990389390, 4470874115992010034, 4710149186698053605, 6453698110810027521, 4897449941056908340, 6759713203745976661, 5970428272583744993, 8056989761012263729, 2999093904151622813, 7965556380237326256, 1853042033859059827, 6948061864181040009},{3238399986272330067, 2717372529434730438, 3486019135829088101, 5069436253196567808, 5833521158886804732, 2902881182660108844, 1519919898773121068, 1418025636310304282, 3618583105304854636, 4643748300339666559, 7502186677576366752, 8093851336117165070, 4083088460541188488, 8609540314660582614, 7491786179666234807, 2556876045845658786, 3189620680760110886, 8266585550869649396, 7428475934904787109, 5441164314944602293, 6887417973251921772, 1565541956791513335, 767107088017827256, 7224194016400373357, 8467562786520605760, 7272401491106069789, 2701770951283234842, 7790806350027352496, 7790531155244953950, 3067650364609793969},{7918413470702310156, 4511738709987433949, 7838534809028905772, 6755430416030142500, 2831906982922662405, 1299690299761578604, 7824954550342998524, 100092521565994858, 3894674920017579165, 8471230547425659738, 8076649047751245499, 5659167077763081627, 5622220729755617346, 7838585829862754207, 459985704146521036, 5611566615682392787, 8474178668663440036, 923490014796899095, 6856505142653857386, 1364506143810430038, 7501152461267572909, 3319162185990961522, 5913678146720599775, 8236416150007300565, 9000584973539145326, 5337874584844041542, 1107894307423745569, 269799824023965302, 1146595602575183106, 9183370901223374021},{7669570533967063612, 8174447083043984261, 4279646739384309782, 4386178706687321374, 2300293541553747705, 3419257989293565813, 8226153956147980871, 9147033799872290092, 2982339617379698897, 7150258834589492826, 1431990913266126722, 7203902538184102436, 8600512081658034060, 2218687312994427118, 2519218556095317827, 55271504094275808, 6478360405719201800, 1120318989709534032, 2301880508792438082, 514449862972171038, 6458006285122578280, 5452426311293842105, 7980094819363380085, 3550524071892150594, 1058078571811230452, 2688536496457650344, 6370685123098535949, 2181654606918691456, 5946160434826979685, 563360614195580837},{4720961700983115777, 8666648410525757961, 168159003491160243, 1181049859203411948, 7084196968522776764, 8664624671523366134, 3241405303012826868, 1592989742490422132, 3551495927816573122, 4198388533093643710, 8974116097503186441, 6663777237390518721, 6208585992286938580, 8806637246367052790, 1740645429425995708, 8487421951068639532, 6772197631074653703, 36111748060729997, 5770597342592315614, 3063968286664566218, 6256299585284135304, 8592786233404932749, 2623819263035161353, 6833554588114576904, 7916577791011190842, 8804286463169674675, 1300307731360511641, 6294213376718141919, 3593652719325653751, 5502534986521666288},{8185998811673346030, 5399600931809214374, 4765775479748839350, 7341178756087658301, 146777735729003438, 2154342482871823166, 7870507222726189774, 7632089851051801190, 8875025138776472305, 7858618542966059950, 5874091070038822155, 5481945704419362331, 8684336400386562793, 2443287305051947489, 9214462020193780324, 9185981057898473880, 7128689205164483805, 469547208217193184, 2128639451296002788, 5618118672339460878, 3049029380089208254, 5928233793200356539, 948801814757741057, 7919600286643336870, 8024221200882003280, 4138996937282166532, 5854578758833527014, 2921500680835960578, 7829696033539231802, 5772496643633781957},{4251454061722987826, 4228894182315056369, 6539461203762846357, 8721145087269536568, 530794425727637741, 5750607174751184270, 3802094923569281461, 7245777207956659170, 8865840909392667520, 3556621060253406062, 1742771323814516010, 1271123104259823453, 8242315686619729929, 4892338765426306702, 3708416561007943477, 8629772072461344417, 6177191251956053686, 3442382157416667895, 2778004373901609106, 2399493751532815375, 6044606421183008080, 619794171920741674, 7145797373597903647, 7517969761749394990, 4928433527057598969, 1685309333415207285, 8586421684777029308, 4149413648700416476, 6006422897998181646, 7643941877705410069},{3321374309328007131, 5776926936842617192, 3063827373667702731, 774093864052809725, 3383847457273679895, 7629831753017391938, 1041796742818125228, 8033076181480646894, 146282312506711779, 6497690314226719539, 3734177453078003962, 1534939217965123801, 1214480104268501176, 3286263780523336193, 7412456425490227828, 8414008656932066417, 3651187601460081113, 8454538793164247469, 4662703203865034873, 5642279736481992597, 2029334771590920525, 2118245426612932982, 354654997056838429, 4550608378645501478, 538973245666220040, 7258128163281997820, 8986127893040879531, 7736068856890605675, 3017478454407251218, 9106071523849504241},{2935533101092460777, 5338304660169034137, 8925771083517386279, 7624474613160166030, 5667785325335852900, 8987646838082626548, 4324128817245152947, 847756958038595664, 407509325992814752, 5249610267013126592, 6524342710224213592, 3540942486924043394, 3112776665107037236, 3924304342232057021, 4153439551836404114, 3234208814234430790, 1901128447549163117, 795248791794224619, 4036785499724356239, 3962411972575105628, 8347383836751885413, 4049393247698625615, 6169920086631369931, 4048771706795136998, 5182533096916696585, 2659448249260768580, 3361489026720986766, 1437483953361536586, 914739150120238633, 4496998588452250194},{1026550640918879370, 6250688357305395076, 1689440268307759245, 5867493851496058050, 1803727393926791958, 4224140742493553928, 1713433157636453769, 6936180635188914420, 6987498997041661857, 8576905886535305141, 7163710196487853205, 8643604995869475242, 7984032174710253482, 8986951122189803349, 1483495989858331355, 8764391946141785205, 7227289079764833889, 4981733588240796651, 3595756118966003283, 8050893850358553955, 2043643301127812068, 4297425581875913546, 1709402841713519534, 6988158791219630626, 8354341381454273858, 1309735219447778176, 7767194867692553798, 319740186042599078, 1942288355873730311, 3222752214493237229},{2166397502465931308, 5447302316149512720, 6743337424571233099, 3789177404261853179, 6528689826806248254, 688720656023537326, 4629886583913167300, 5283730030053525885, 4322599527466017483, 1339329265910544097, 1409843179771967548, 3067225212040609332, 3231038370779266592, 3520268550986905730, 8846754039144272993, 1786088688867847191, 1418983407803921655, 5433702095109520340, 1857536713233690620, 5894348303662203179, 1766332807259049472, 379524839367574938, 2530625024340264626, 7154861343005011494, 2841090303989912672, 5651642681718734054, 5384475599599639147, 7280133495010955028, 6056635907623823673, 4224041158615304001},{8471089673693191593, 504832004973760964, 5455612696642408208, 4853066495762356946, 6123177413009627795, 4237072377156245530, 1758531139833409581, 5362606625890689765, 498716864943211870, 4743918835055354060, 716449880865450023, 5787034832073986620, 4041461626983172781, 2424240460902489874, 6713780141045825332, 8838587783500942033, 7697277824822818725, 4278367562984764875, 6986156816086973153, 6373948957147895553, 5650635028072530154, 7608805512220334329, 7327471073160592188, 1586101999349037302, 2016433208945814293, 3563944243892578843, 6806885635865582641, 5344675533390852137, 1713961316434388282, 550255244716239072},{5672529360519567129, 2097724143345109309, 2585528264672746, 2386922249660045122, 2606692586978115791, 1213782725913611082, 1432110110423374159, 4660148945673958029, 8201588820313418120, 4014717267545253893, 8726419894420877203, 5493823851944435575, 4990046550000404944, 4425774848038546558, 64128439904562635, 1142609610953088169, 8041867033209946199, 8627545200098739073, 8463117235547034452, 4839199092769572390, 4123710868443395841, 4229041261592791686, 7082653888656140830, 6811580215163044389, 1426262119730501920, 8578606382187951390, 3900293846205160323, 379476308187525840, 6089601064420984704, 7523110697856844489},{7478026960042098013, 7725439128146844126, 7371519682404844233, 2758448253223412545, 8787717980803091319, 3388214725545350589, 1098060707861999072, 7548585241805092843, 6040956091712066970, 7302631517297193590, 3196235006575574459, 6035452802410881710, 4794998470364352140, 5368034593143437874, 4236915376444917251, 2666628889113684954, 8874446733008430491, 8357584687363251136, 8093160423267729849, 7731620766535217962, 9148645183926930636, 7475234902411531609, 5565153162472388736, 903220275643556891, 5269022513153219550, 5280170574712645924, 8020865759314389657, 3713182406145267309, 8971480347844465895, 6702037660476858334},{1152918172214767718, 3567437772144339909, 5017046241362569957, 6372086412367089135, 400518019549630433, 2026526050093540519, 8993784388286792721, 4531084663992781123, 921428807957563584, 3518248973564356950, 3382589958514611508, 8616748804811976911, 7646824473723493898, 1918000447426024404, 7408639611750524306, 8496685895141882809, 9083749646341240893, 3321768333574365021, 6385001396530352125, 5359822377913216071, 1048052293579724938, 7813053531738640963, 3687292996817811042, 5589410200435992334, 2048383639471942104, 5887073187416950423, 8951348153696094624, 2067912305765500064, 1690704818788106935, 2111837245993984432},{4348019611394118644, 1637588708322505937, 5132844676394120580, 2304169075958371272, 126116297633917690, 5580939636573809195, 7535851454438466244, 1898602516065889607, 5774777196900680043, 1225895985856644122, 1385383517298615018, 6290561605178059047, 6117664410946239399, 1706686931474004323, 7684295989837144307, 6683451339586296654, 1127728300339526485, 1251691986107597370, 7101086148945628356, 8840372530864118220, 1322935080238555839, 2691581175926941420, 9002566131290101289, 5454379816256226285, 5202078297995277738, 2609758173319156719, 6791130175468384111, 6317583070594594736, 641184957399743665, 1499472807752935542},{5562663603782738548, 4476833797442372722, 4523648726819686678, 6565829519706428960, 8773155389861430144, 6069377172069579773, 549985903167813036, 6574648115254523566, 6251548840020357083, 9124489168864068222, 5380035216261642394, 884068016186137162, 4840342886671269469, 1022929369146846001, 2507259375586561705, 3248827685952575152, 6774383985403442441, 8757754875547937511, 5953693617591023982, 9045020265782715071, 4733279331250190940, 8527888962578394457, 8019525232786287603, 421195390255585355, 23287468147364002, 2319882899207931344, 2020688848321447571, 4959401880039017274, 5932455116988729636, 6528976848986603711},{9161920865879336566, 4943475487249293501, 5087629488599594439, 443425569973738406, 6292564880860626499, 1484153676511917944, 143235476432011918, 557436829106349328, 3684537807726074451, 8038551029134288375, 6021248258485660537, 1722571448447047842, 2832206349862292577, 6272133224311143818, 7707137248030239786, 2308293916216383046, 3170765603152924006, 568468571418222937, 6830947299491006030, 7450416950951158285, 911059204029382605, 5624726884140100526, 4499437138252874512, 6689736950814329333, 7447895434123013962, 8973020715470120325, 9190577732130308646, 8852511318104584079, 2050932960176562895, 6209108825336040531},{2399992638130206014, 7806126346218057440, 679699486094491779, 2021353114279166527, 4590694864835244670, 8031304073170311561, 4772480828551069155, 5675955036852880088, 3300050603284849023, 8903218659485206762, 8563154648637597211, 4833860006566003257, 1782379082888119307, 3442636577966225092, 1012272348090714398, 2043160667100487064, 2121490507292311364, 3565467961710117386, 2168313177560116161, 2545529099418225194, 1026962460724757124, 8067174262635504865, 7275849809143352238, 3351662756875934533, 5103836269732774457, 8184020501845895928, 219385893750118692, 8159128929084468291, 4918367417414220282, 7764416980949911147},{5212402438695016468, 9191641381479020984, 2505240731629572020, 3026690359605589854, 9171699236487583441, 7138519180107928737, 3733896797979592442, 7127126215993793528, 217063757620914087, 7928142337787153325, 2169434529443426227, 1317039570749611373, 3712726026838506041, 8628781151544020185, 5592724988371012447, 2070172252646085804, 5833771872508791002, 6835907311374166071, 4602014564093524649, 8066649472895045985, 8001090043798497679, 1883687389913750342, 5837105082091998793, 3925963586376194666, 6934735616393118898, 5830809600793509995, 2128242182371215262, 94020705911805555, 5964600085162888085, 8481761083799269606},{1255390824080698769, 1853990240340674427, 1884771507741444622, 4428427964117606475, 6418133780010291330, 4434986433467618415, 4446929924701109225, 7028060656329478933, 1516003756132539015, 8093886921744290803, 5394359516366609558, 2322650047122668552, 3728288572531003319, 6475754062221848945, 1893448569464679241, 5743703372303432848, 4355807985750340546, 2258126853197504956, 9198354042451597134, 7775557382429594375, 6660006276409789802, 1649040879913849662, 8251487282420686062, 2479444605669982348, 2608815728449551569, 7155579085609378878, 7467743767393800185, 7826286214155827523, 4530700934009287423, 8594521460449403902},{8555685260500996388, 3358487360498139921, 6981064025052451742, 8047929475115823014, 3206115213044962917, 3884891321513566963, 6888030022797743435, 243711892595942328, 5376165226410854543, 2975660952217264431, 4716112302047697883, 2847935554829444363, 5600257404980241606, 2287831853981300677, 5050675451281991859, 1963688110251743286, 7975407044105859999, 4084480243085028506, 1049415340793840049, 4043932788605763885, 8432598445532247048, 4676497535286917483, 1715494461445671688, 5328025847709403725, 5912525710591628342, 8338685251889038393, 2985030690624283611, 2517623525897564681, 1169633743425021735, 3444973825214349250},{8401846138680794902, 8557465422116599947, 1171532655763145717, 4992052946205478384, 5043776444039063608, 1263629892659016896, 8654917926377056308, 4102633730590000773, 8512485873706409858, 4254752543045789419, 1773025193282604813, 1948122604151140191, 7599746512099310980, 1357794052116418936, 8882373112292885004, 6070608595269495190, 5490828675395712652, 4318295262219569300, 1904794776234623914, 8145733506911533762, 5786015062994972545, 3459518200889165830, 2837532051417493749, 7194832935656059161, 6579281999210790380, 5142553484647099739, 5697053793020010787, 533376828112308219, 6116051465996879069, 8076945421777672392},{1271129131469569132, 6200995025156470244, 2874546580566768805, 7984289586122767082, 5531415350587058154, 5501551386694757494, 4338140919797583363, 6963406023834573286, 3210695729804775880, 2822465053429435013, 7118658547619285222, 5794363500912995100, 7684090426034774501, 4796359512165920219, 5210193956754465439, 6328244026130092585, 3846165378914739362, 9095155860607094603, 4274482796502183089, 6218225094286557264, 6463771566324257099, 1343385923048674798, 2752786375193990863, 9216004191466174520, 5211981469527560263, 7218745206790344927, 5273476965884906890, 3316132255431842439, 6581048206445768232, 512689598946030843},{1212172433541788477, 4795476528372030625, 5584959495415460514, 181696851382660549, 3154810123051776964, 5397704710828127155, 5366072786922345075, 6288496590593492445, 1536819310391895883, 3375054846422923965, 6093180866946600643, 6031926400931333018, 9076979496018803082, 2346439522038054735, 1069874581183582312, 1751395183600359439, 4673152171135489589, 8389350470501022019, 1594521888800601284, 7586252214155389609, 3235589865346281179, 6756159563675291010, 6073870481494884210, 8985924447551352003, 4416301852566713530, 95434654823148325, 6196611616168182186, 3451079012031062209, 1479103181820221778, 1053106707054882187},{6395112874715973035, 4852726891975746504, 8988956682156611439, 1024310129278968346, 7846689771885380481, 4612140416257765547, 4858426765343935776, 3374458509295142717, 4638605435453953471, 2754673439997664785, 5516340865263041603, 7061872333930453862, 7241505391530929013, 8687381393817059729, 4758938426925246704, 6492101524149650065, 8871307514856190659, 6837434293517701418, 4902192795576190955, 3858193848386439024, 4386285291714250154, 5834673213324014026, 8602239227715443887, 6299190317916501805, 6785966370289939875, 6476014789358221703, 4178686625162652870, 7927994702941405076, 7458916047470805087, 51689780429269106},{4611584243930620739, 8257619317290789717, 6747537081146057392, 3960880344029688855, 6585032141019807133, 914063855353343175, 812768794976199221, 8375017415868872366, 7797859423935985983, 6850231908325847712, 3573309257976420735, 1809491211702681161, 8353951866686389042, 7543201384489795860, 1399332622038849158, 1748086036850456821, 3942399126156111253, 2150773383435323354, 6334092595918651408, 3716348991706164727, 2763343398329905853, 8216897943794299603, 3953641819753906014, 2038780942109614418, 8887966959737520415, 5803151335549038349, 7165852658625338023, 1497602447447229376, 2046435862461175890, 3675071194097787985},{8828205050321545552, 8623628510413326395, 4837862205332687820, 125488474867538604, 5797770441566689585, 7585668270039224244, 5322552978175212503, 5685371284189548276, 4854981091652830464, 306028820491653301, 813216545610579521, 1326257768138251254, 165091243895791254, 6145712312316319016, 762936840234009238, 5449834886839383551, 6226491331171138846, 5628973554390096417, 1678136173473425429, 8462231530029417127, 654021544626792837, 7233391806379648323, 2454749513525467058, 146107015294891210, 4612196818986426595, 7794841706491471590, 1885962121636409090, 261455187531063079, 102783239582124042, 6776701080934764120},{1170625325393658176, 4522577930632830650, 592261997254410496, 988181941853859905, 5717435673359292072, 4013498908511492598, 893918748122315783, 7007693181810280117, 1704060827361777693, 7930263944851092662, 1481335313672895493, 5890548474020529949, 11418693309430666, 6387355701351075603, 7493362223188740926, 6438437340030664653, 3020740715268204319, 4664508510475821273, 4202616611244505612, 5259053663266611346, 3200665339353177847, 231604405858175685, 6743956666881385334, 1584915267013133678, 386787332882051490, 7995784586083518801, 1219729865105739026, 1986055821381346181, 5288723584459921059, 5046927356844515088}};
	double max[size][size] = {{8568312023052674805, 108861110430560118, 8687395675900259035, 3631757269000638747, 3178104793005907354, 8418273887376192955, 8155860795837516542, 8072955198035427864, 1689924293612532980, 6568828827290407727, 1750888311765543891, 3697991985079662224, 8072389496256966810, 4697298528470268252, 8260417195247328447, 5212575883148757383, 2157864039872167926, 5451742095735772051, 4395225968702489481, 4054542304629486885, 5850402118257057426, 6894141343831540547, 7664832096104687502, 2411304140158773409, 557746114731145999, 1021670659465769702, 4353474448021362823, 2971008775237206541, 2644617888722283089, 3919048950697452960},{168062848322901563, 3140807608631888, 3616638925313629411, 7944681736451151414, 1765216609942545462, 7551477452843049134, 4344492219259729523, 3381781288761319883, 1775312349330408445, 5140106880328891490, 5435468408639481601, 2984174559526590079, 1915886226291250908, 3012101185758457810, 5301497864597005073, 8231408587988433549, 6902815078792317604, 110272576776155642, 929237857712534895, 4460909537201571470, 151427155867773620, 1712156098060936345, 8108990184503321049, 6955366588248618210, 3063561015835621400, 7797526282510957792, 3921060111665475638, 4463858475755750694, 5825297995983744527, 6244211082226507894},{930595982805680343, 1642147040767674693, 4418931658309700177, 1405380973105517780, 593417442525688245, 5529827180090013232, 1675296834462288940, 327069820036712106, 892544161464350576, 3448107597853608819, 1503971642025580429, 5304276265871596814, 6960711008217584274, 7274169401088154845, 8372554876825947716, 7836489174314299100, 648454501662544074, 7452779352779828092, 1801361719402683904, 7900992859137004028, 2595529841342659963, 2361134926017797411, 5141771694347797385, 1642344967961659087, 7432801504985052900, 4800630052819770463, 4004367585718939209, 2639963086699123837, 6757462973549147811, 8732880933820766590},{2914462228036376028, 3205336211472786166, 1994657471646483780, 2329912966618631221, 5666865605942160027, 1170135438794310879, 8128258621274873063, 375604486866842281, 4345064779907381880, 7698746421122356644, 8165300175323236536, 7026865980950555708, 7182550340427680889, 7068364235394381814, 5825504033174093590, 4543046344062049297, 8036808165525216220, 835927506536588231, 5050860179276990164, 8281000240016315345, 2025063824341426670, 8558190653125587283, 5533512181646286406, 1817482491545114026, 2650989735765776760, 5126806118644991873, 2017368232048108450, 5233479442212269916, 5477998536875546892, 2486362154815933809},{2723992360982629104, 4648133621869001623, 75873964123838635, 4363361176926878634, 4811680610159641741, 3005095879883910704, 6135150011259034455, 5691371008997926068, 5762780345746503388, 5612276579199346008, 6263607019220335235, 5048412538748585704, 5335301170227310974, 5539903474676039312, 8754298317281997063, 6048186254830027163, 200058884582896992, 8987336341959848529, 8346532261127447782, 4773627180288619972, 7863843442860275029, 6336707300978525238, 6840037473408923957, 4281936268524150557, 8103599807748647559, 3458797617595193977, 5419642663097330697, 8952604709322078148, 6293516488953507596, 2854148582865215733},{6000014886918044387, 8558640093462177602, 20365494605950679, 8755523669548922497, 757977665355511162, 5220066613539996696, 2636626216429603212, 9049772401915037413, 4858089923507230015, 2351265875059584024, 1319072292341118458, 2655986908577078353, 7303351318294109871, 7785031012492646369, 6574092350218887228, 7386823556401096273, 1680803662426735867, 4691454903670752317, 3768972631017301994, 6666993236480228822, 1832220297667560021, 7130370883593361620, 6264797035308979250, 1626269572271616624, 650352917921829733, 4713826096838088339, 8781701514104006167, 3616622183406155234, 3854114399731753103, 8573390728860429154},{3112170759602560668, 892636238349950047, 9111686024661825969, 3605007787785423240, 4610521057886120863, 3047055312717656976, 7655464097621849211, 2923177696783359148, 4820637183169457048, 487634016559217178, 4836570723258694174, 2035466092104890742, 2109748008148276059, 8783950618833569634, 4281509474264297752, 322800461216071506, 7466075274941185222, 1287939003748922004, 7625704484779542212, 7191876827721911737, 3731782684200580354, 3753462316287821242, 5775054717141594573, 3853418168571972300, 495364262634972047, 6600971703539284795, 1475332042499778010, 489463698642511536, 5438279383068764523, 6189330606765867853},{5917168910379119738, 8293291079543691955, 398808245287358574, 8832040520965694192, 8599857673944690438, 3133987534239992130, 3469838227067757680, 4232948678015897504, 6345700756769438022, 1955438025119174625, 9181145521638991196, 862262624133622814, 5101931607859640998, 8083967570678715138, 836742282059401297, 2995275211823832387, 5289915065249418015, 8671791830293095478, 996733260696523469, 3228621551124724769, 17599605985074442, 2723697055405218496, 3595115173369074362, 6716124387932218713, 4142691708213346487, 3928571119051896885, 1948835859128357806, 4516517804881037335, 7463697199009285876, 3074012183824154512},{8011815974584935606, 5080220434883494787, 3593177609952835959, 7610362345572312659, 322359661524303728, 4960197835063267178, 6930966333019916720, 1077474631016736845, 7990018634695331660, 9160976821631967324, 2535224681004833645, 131519728736583814, 8130522080267420534, 166009026231325230, 2210357495554931045, 3586677303657153312, 6688970669166458893, 690667487211619461, 1743330786145185144, 2390376294833389565, 3636132779446457155, 1608743846314919354, 7242699884414207553, 1413861061701789074, 4258784200580440010, 6345211743166660250, 2562243642711997075, 8286056086868093319, 4560840686594133668, 4460536320232415463},{7746787088945664158, 8906454833523612183, 4603448567716133405, 7529019979222257952, 1650829719169314322, 4628543426995899728, 5603624527629011739, 2344770735924297590, 7022963931433672130, 8392197425594604456, 7638134040850566186, 7518990873376872498, 3263828726132221950, 4780156027040077597, 7089354110401221759, 5141499214042096937, 2219892951730592339, 7264131623612575343, 1624764120189113038, 6781440767040667798, 4244237387913921140, 3548420400531020187, 860871689262827217, 8580482154898111348, 6259180093175437662, 2605758366210790005, 1158080440141867798, 2310862016269103600, 5529339061377198779, 5151407811495871667},{7528381631746046674, 3517082140766408485, 4304878126885564163, 3854757021428197428, 5739097692679299094, 4701873971772706563, 1708539463161291857, 7616449632573864523, 1380794718598159412, 1133222948020344533, 2219328401080512407, 4019187248037978852, 4594156631615934964, 1997007087989405563, 3126792463623688968, 1868362666113716139, 7296290577946630460, 5828869925132223437, 703396264817057886, 744960135800594450, 1669890050108567719, 431468900543448373, 708586565569281168, 1599634865391212248, 8969639075169654926, 3757016329872381737, 1394080387796795812, 2018065840064417405, 7802937373607735978, 2151871625834241718},{2126317242243283674, 7911653626692205421, 694069825543066544, 4781786325086213769, 6479617594077961908, 6982006119796257401, 7022500179370207757, 6459773245844408165, 7630924253828395786, 3188508071206975936, 4469300878447976849, 4281404794167330555, 3022056363708932314, 8381898481241701106, 7097136773583699461, 5678948600216444226, 6760700266324075524, 7217546901061298372, 182599916314477759, 3894897917005606623, 8579325243289619147, 7160496689765696572, 2803955790488861730, 3995466219925822832, 5820195391473887937, 3351275747379845517, 6157583441085845494, 5668625077607812933, 7354781114577048194, 3064412227835442734},{5075214204783869259, 5564085871936987938, 4665741741738449434, 4263175089752055316, 1883748216436182631, 2966254621759247145, 1239190367187308524, 5655991473807048926, 6047427122617695847, 4114152023825611784, 1248437255792930981, 2146433295831060911, 9146592207972571121, 4697639916083473184, 9111283344341718724, 9079385715176725405, 7122292349467953492, 4971328020629532735, 3581731137524874729, 8013427797842341109, 6910258277386109512, 5644206720437391688, 1579547169899794213, 3601577215774697476, 4530492125286934557, 5377852749518245615, 8931979511674942117, 8732013949460144581, 6666828513795175847, 7252593641751446025},{7602676199087990498, 902115302339046640, 6664777529870328386, 2920219915410624759, 1217324406929300999, 4472075534244523416, 2092385447691301942, 2201243463670538449, 6377286688411075259, 6385256839977653424, 1744994155432428428, 8779460311373717201, 6817409808401774466, 508723280666384176, 2357356441317382727, 2429118555643845295, 5703214769752771307, 6219595422536539237, 2747116105480980226, 3175079094774936193, 5163045376007099481, 7720736489340285853, 6577304530225810734, 7427224352250792326, 5521344580316624433, 4992595353729043971, 146016156707444871, 8230778130362548599, 8032935545745225070, 4500026160509893196},{3763724979818547859, 668466145068401741, 5012664395153518538, 7451259548591545520, 7123408375143721790, 6738121680523458321, 2207839760004643046, 921491694281513199, 5919702966198836483, 5229047695573823787, 2341884883268230055, 4606943744073117744, 8962183393390900578, 2207145127239682077, 705311498277053344, 7744463607474911831, 7953338079356645450, 6083043013896225403, 1605017628257337337, 7371791458783060787, 5008031234057100131, 111283802357152640, 820728267953182362, 8584066136715024334, 3107382686190366778, 7413363224257622250, 6463609982430935709, 6970221596824599158, 8434983512820238491, 1302788624795897665},{8633457537957578889, 3639673373036783744, 313665542075690657, 7938635836309316456, 3338409424254628222, 6205354418913954081, 1447410626759980046, 8288920385617071666, 5404967339815066130, 4877135546653612726, 4869501120129686404, 4741473095292363267, 7237553022862981808, 655516981426971687, 5369427238828744075, 2447424300475831855, 1124123032650574419, 4711277223873771865, 129224228889257071, 6733601180191644638, 3652436069250934319, 6765438710894952662, 2156714428464601172, 2514968916590165682, 7838632034535025448, 934803931904087137, 3826915568667054970, 1950151844027224369, 1083732359519512480, 6922696573752085187},{6386293396992593493, 1426742468850158149, 275837231805867978, 4891658719893976628, 1170604891496507940, 6644521237174155087, 1057022692753838505, 2574228007573004815, 837061072218988587, 7968468322561951079, 4223287313021252440, 5588127536933481356, 6467033599097817748, 8265921470075346431, 5237283606694710031, 3531188724615110162, 7472511010389104325, 6308382886028791352, 3431205677585177205, 1454415632763862325, 3976704939175921737, 3495140453537971483, 7377096193015766545, 9077501581504967451, 2822695719091209762, 6645128201012029404, 8526280499911071339, 3792776326772933915, 5460894672061266663, 5816084597888267903},{6035541254516991443, 2584477929964692672, 6221356707421994608, 7604055354528509564, 7106045602012472122, 8769128409116489092, 4047142375163450231, 135433008571058832, 6462182818235555232, 4553954268946966642, 6507081934774827128, 8575688028739115620, 5627550386353809431, 346167249233647006, 576455663925367554, 578632449181142969, 96182229537393954, 3543116734862144226, 3174290800462093147, 4087802927910214142, 3661017537514025728, 5096050093201057984, 1367329010289056738, 7416753888243305408, 2315773576363552056, 3651451508112343292, 2181253618303816354, 4938746633875680243, 2016010946923731763, 2751770144761282329},{3523703602333871882, 5912576484809848684, 6321376876396100916, 6599679804515301572, 9113515035269106188, 6891305603380976046, 4750456683789117806, 6958569633133811255, 7334051785881021203, 7283402738457562900, 2467069852837417379, 5370216817165404492, 7070582863243222028, 2855597359758217636, 6692483864499313761, 7726121241568744574, 7945462926285454823, 1939310418087508895, 8974707687633363380, 1580865622749654663, 1127131221372108685, 6246930267148609253, 377067461879484185, 4085366809476854700, 9055219199814623608, 3592649728311364696, 2279971982899755588, 2618088951393352991, 329810376720507790, 8783758545736522596},{8027222386572048044, 4438510309033592910, 1988203986740906390, 2682138598123518351, 5247904195465267092, 4576506418574691782, 2019939838743022430, 343761812207560138, 7272635626324440859, 6541788508002686403, 7363830571524038127, 3007349765258899736, 3723385572665867054, 8644669402092006472, 3356047243591821872, 2564265988048072695, 2264358274275844200, 4148618502166609827, 1157713365187373452, 216723282089936337, 1032376354818352668, 6405614257969467370, 3096667084794420099, 1172807003360152046, 8591733986510629617, 7560331725400444845, 1921006563916754162, 1104008125464563426, 5272824925361571112, 6929029605012206614},{1981307261935517525, 3061614705586136522, 4942374914135618250, 872196950856753097, 5256922788998693809, 2381662142068143188, 3929665427919501484, 1726477138800529305, 8042690068482212245, 8206389089289093188, 4170911204323360022, 3928867935669908133, 3598683260801841894, 5762235067260183470, 7248043031114387590, 276365008699715091, 6374766394986370907, 5749057154521270405, 3716582921707172494, 466457320493434791, 999478547321590479, 5980488945022884755, 8925194032567398142, 1969752563181977557, 1588267835206058867, 1280251687882522406, 7940838304864718161, 8967113093265570361, 3677373341700473631, 4371106624611774392},{253623683651914054, 1537525308462946625, 2992209872611993032, 2596480802120232219, 1501889694850077657, 5413925999307808229, 6774546979218529117, 2341865425323174497, 489107906582114781, 6181365251616642631, 6196916089683409017, 7380804060685643896, 8012235955067060859, 6504495865446097537, 317538588850317046, 6955927506796626448, 3637601435965335673, 8259789244841187746, 6797138637964251714, 5357040451969785279, 2411419862219040205, 1205922955978673331, 4510472535283059336, 7310995501243102813, 6899091540574765432, 6742224153765167442, 5007464246958396092, 7649328188273619386, 8410209941644135538, 1648364664392689235},{1647797542642503758, 5355477209124108319, 360680991518347813, 6683941757948911579, 593084519171498474, 3747597363947225399, 7709025329520192591, 1660546764218169392, 5803155974358756894, 3423550059457230538, 957261730979324679, 6054477783768580820, 1430925562762849637, 5498261935942101967, 2467447253367031976, 822762434384854660, 7292450211902860887, 4547609147853560616, 5057958385355461470, 5606615804522428098, 5735864732895186979, 4043782051328001223, 6463840656070957209, 1030971662015427565, 8831281421195391838, 8178068770636444516, 172470015021926844, 8169648707201832618, 6355418091248216814, 1499801478974317004},{9091253921341547, 2756784741575239828, 8926732577064990550, 7571453152217898363, 2055059639061063686, 4379382653374574196, 2564521173697752060, 1896138623408169240, 125786139728078590, 6364259483876776389, 5068590899715985156, 5388093848205567567, 2044573677978020091, 8238490697799892259, 4073767564635207544, 501507087625771515, 1985905866212831303, 5809214862462595678, 6030909966102841769, 4215999411838971750, 8968540809196910805, 1630047576728063285, 2694583646258236307, 5509960578997957339, 5493695040125246470, 6620048432746419991, 8499820382273604058, 7566248968682135835, 5521081986101340298, 7087437661025124227},{7264878591583992308, 1129766098372453859, 9066780027494449899, 4234672240969977555, 7369853856036173590, 109472464176592225, 3997886609791101105, 1598527679002494871, 1789148524341127341, 7491929601131350724, 5535252862083114421, 1239260616195040418, 6169682757397806601, 5789713487771152372, 4916301102534324141, 1505945543141843309, 1461921870557964727, 5121775451941213186, 8877765714614382327, 4233228835072946149, 7623665131978150327, 1226193220507069579, 5256449268062790132, 2000357523934406819, 1342700693803451977, 2694706104158360036, 2877471404112227764, 687831091775504207, 8000281863210278636, 7463471780267090252},{8272858881786235337, 3503165541519541237, 1735058948230323428, 2207976840096670463, 8686396663907226225, 1997612125213831272, 8851100008046741024, 5252640639151248905, 4072733207862780284, 8850160849927034494, 8168444147780924736, 553042278062638987, 8877812109882423589, 5320911041871762904, 331412355734490056, 160866813189738780, 8947388117597465479, 7353167229131944756, 3044266946569226310, 8971904997538334252, 2846841381471720551, 2481053869348663002, 5908335585022925556, 7707525234497581481, 9071455669932637035, 8874445395702029079, 3613258046679799169, 6359889173121880734, 6155632993233669921, 398188337705961881},{6672233647915562360, 6807519381676680657, 2773221015986130123, 7367444012114607250, 8106691448002331192, 5964339134695479006, 216011374352785666, 4768054141465701374, 6949152721024735364, 8944647501031445806, 5239227608189572137, 8029785253020523180, 8722041580976588257, 2356068498364506871, 8050011598058639291, 2651755101073240417, 1692307158823574729, 1576783457821956171, 4301524761535897809, 2457138874412782902, 8887809524480131833, 7384263836546086278, 4076663967726137067, 6424993384257102167, 8351974594333030049, 243290478768241641, 2618935474143347848, 1733581134572656733, 9184430659061117955, 5861741648463721094},{6308293004849370200, 6104309898731882898, 5632673260147328275, 2919641668568008364, 3792101486714260359, 1947118086456678136, 8328807224190060844, 3568074726574814002, 5194827471266384379, 6480436183029189595, 5505447966429214924, 8537806082984278866, 5922991773192720147, 8073032293480303494, 147189456460267857, 5788739292991604545, 4489616938331562318, 5687422115532155218, 8629599140748374837, 4763359101144456431, 8345731441988562063, 6665314394328523299, 7359255768761092848, 3148861094392205683, 1165009775812196792, 7580172027986360525, 5984253461347014398, 2128790701804614712, 5380372761910581318, 7737403697675512270},{9145077431283102554, 6993364564191129453, 3141580609728311445, 1951207347039688118, 4178069193119793152, 4466221222964328905, 221525645223310035, 8449966098626401165, 3427534134534701942, 839499921960352295, 6658487386127058630, 4587314715773504787, 1341168548907363037, 1374373541643091223, 2485422855350099351, 2648527005069687185, 8046467376628749619, 872255054434227880, 768380884812015229, 8683872716053952186, 4273758855640902489, 5999186560495475901, 8023819243822107369, 6895485679898868177, 5607348540270340432, 25088452433848584, 5985788008986167059, 4488144831301359042, 8572623779240170950, 7614843877516199787},{262441510286178511, 7491592519173778826, 4140162205094488667, 2709429835692620107, 4262513918885616026, 6129493505839639772, 913841702494850252, 6152255021694633302, 9004362698767432656, 856905735271545938, 6029808931707869778, 6067149190308246843, 8424754645533916059, 7849486896176965595, 2794619206859448020, 4341780234317681193, 4390372655472348672, 6185964428678473067, 6523307945730734168, 5035955385680791588, 33936222041697989, 7567676757322354244, 7173901993390462954, 6526212181585560058, 2486786679325286848, 3764027918347125683, 3129417464577459862, 8777218472105668684, 8391767430360864887, 6752715345366773392}};
#endif