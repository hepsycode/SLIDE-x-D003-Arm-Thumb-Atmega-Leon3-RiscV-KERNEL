#ifndef VALUES
#define VALUES
	enum{size = 26};
	double available[size] = {2102079687526374394, 1219222662026279276, 7136001401877056010, 6336226794390725952, 1542545232413020132, 2757000694875476357, 984498185003358119, 4506705352862042015, 2905312366140474093, 6085170423868517226, 5307219521478415767, 1395350834527567599, 3578200236610859464, 3347304040721507701, 209190028792246102, 8503217351516623666, 5582465422589574637, 977560414645893796, 284787630557230272, 8928180193006739450, 2896794813382494895, 818688747563003201, 8987909687954705246, 1877470346702227179, 2013446816097702448, 2032751674915978299};
	double allocated[size][size] = {{1149933963011357455, 8196805824393133580, 7740435035807805167, 3006081949745993731, 8801317167212257820, 5857355896857666887, 9137483881655511565, 7375802247791967016, 6643349063702769759, 4546241424188181228, 7240917375304849498, 8644285940779627505, 2961542958414438872, 8041974375167978233, 1658147150341730102, 5117069040320365796, 526987354280901639, 334641979262980457, 1856905133107861464, 3316907972888905557, 6601863469288710935, 758017371921768574, 7046838447660373669, 8414249348158067845, 784912298826199545, 6886114953692400900},{7558334452537611563, 8227720956324889287, 1783661228785677772, 6772448463551459782, 2339250893857576399, 4670955866797782478, 6300667383472041134, 6085978626084877304, 1197431792960729053, 458395473842360799, 682337354449976333, 5120294967926956086, 2635644969797801733, 4413442626443748475, 77649442230961803, 8835406142840364811, 6991272943446721791, 4865023074788411765, 29040284991599805, 3401643714662350007, 4054710952954898468, 4572519928471354487, 2560608952475853706, 4338912675363806701, 6106253781204973773, 7183677693641415249},{412418733007392510, 2922419803872329990, 1118779662588072315, 4906482448009305838, 4321240159954994449, 8864830668641217535, 7520289232367175908, 2727821580015803316, 3012883978578449246, 5962750262262571817, 7095338177822145062, 6600086977065908912, 7966036805609812410, 1241791448769371204, 4848496086656276763, 8761747128202293883, 5856633683193573055, 3689073857791317351, 7843612552928934836, 4582766207468322467, 5293877334217623365, 7319859657090679337, 3368915854668521771, 1998959096492216560, 450728203140705361, 1769814910666524439},{6798258333000500838, 9152347135204010084, 4864723714986628448, 1206973879644462012, 7576471769750218735, 5976780606472789236, 5791788807369499870, 3549286573531690031, 5634404835402698193, 7904539924960611407, 4202410894047842917, 7438263344438062018, 7824850782957090750, 4174367490718071186, 4271546943224400699, 2322378866805838353, 3120331684328839133, 6576075061060166692, 6644548646409265650, 6451253088760158712, 8326198974157994998, 6167463597622993062, 8575892029725720080, 7500005508419214081, 8101962635689263026, 2498732126924936605},{5371453110976550727, 3243142335086329091, 1673897203515674577, 8923456947122916182, 7642126249419804592, 8967000034438376967, 8013250025042939354, 4234561303847243645, 2180872259786467917, 1278353850984153724, 5132949167064270832, 4748553079963551860, 240896844565213491, 6613790481874558492, 8190201000970118078, 4055599620390070771, 6004839156646479439, 1826863089865350711, 1289677408006484099, 7367415905436195995, 6572037297735398112, 442785362676528919, 1907759546611187522, 4878699419044682453, 7683955451457250428, 2728122423405938198},{6973924633064480108, 7427298428674008923, 2426330171473037256, 5605390238643114691, 2044946726444932635, 4867104631438284484, 6384077969203560870, 8959119292258421998, 1858038828957514657, 7258958651734138509, 1214121328133316804, 1710588159823497583, 2971052166124074, 7727936408835417111, 2678134429742854011, 6916438169129274521, 3554248131795000435, 658428320281825722, 4600604897988711792, 8206040695717153882, 1067600357682099680, 8483192747604782012, 6699382046562692940, 2626304421625256883, 2247600832385788637, 9099984424093328728},{4292046465455975280, 4119993297936987070, 7954569224133961667, 165114259778468265, 1403588082257138920, 186629754103688944, 978755733705368634, 2532201912533243285, 701866628444378553, 8867463124004830815, 5020883443871885533, 6955969723722245181, 7997650157857099753, 5155833486379789247, 8759143045788871542, 6403332654854415333, 3295096110662229102, 2885110618422891042, 4399056866566417655, 5275561976269760004, 8928874778343023119, 2931948962931102796, 5482157766575785996, 6675591261404636758, 6751028268947081195, 7962843012431233182},{8455144762839903302, 3960427736068117078, 1803271457895089639, 7446755441396474902, 8728684012157855446, 479328511313212866, 5323896712329845167, 9035622441337828023, 8303420051698608990, 112272857831890691, 6003717670382914881, 1058789027433837242, 2492705401373833604, 6503173346820467834, 1704978347893188538, 724501733493318647, 2237925921211491454, 8826585572870634431, 8439586660879868841, 2428950283987318518, 4262277893620865093, 4803989717838144818, 8390598566562339779, 5902273926338197055, 2650644904985138346, 5703137499349422251},{757606560511680903, 5999727201240323152, 3831779482706742086, 1203585661070899721, 557028213124925666, 1103059947017032588, 5705753000496937058, 2841300950055183731, 4088696339542431873, 1488338116468024925, 356879353436004374, 2973019294103637360, 1776311312169336668, 4690384280926877969, 4427050541016984332, 6828130773902014517, 4837009867738165618, 3236381813746175489, 6901878244592418606, 7341826635326960054, 3110706140469710805, 5315281541343973644, 7322296786210014922, 4327241919845323884, 568758093655588725, 5751401091909924158},{257293691856232726, 8463751584340587801, 7207379809883875027, 9042666450766174259, 3700863281630480778, 3769181570416738549, 8420411716506839118, 9040817140548755753, 4189554085208464401, 6424263889026801672, 4865510005629963258, 8102231952498166120, 7514241730326699883, 7976312235543028367, 3565239100028121546, 8992442939525781120, 385232806259073118, 7606821965803698010, 5827086559932604940, 104641421378156404, 1373127677285782517, 4562405985433715895, 2689011934296032371, 4614978798808819508, 2832275751441250029, 6770264690127026052},{815618795250444900, 7660034611227527114, 8944982618331473079, 3190924147154865266, 8591256097835106944, 952419582400878859, 1400750610340971564, 3004146496754865209, 1897792213452272781, 7237019026793675005, 2351990231382360566, 3551648179152045508, 4212958089188863093, 4795667503282632559, 8864705835229812350, 6289278208161314315, 3362904409201204071, 3550727065592296544, 4149026759746101946, 5768702349646679959, 445565423031723295, 8099406485185674449, 7321393280779565792, 4264304505887257182, 4637108788710394995, 3423572240726729786},{5950396461150333538, 5048427510226163906, 4764942840940659124, 2798151946252518650, 7568830212096688258, 4081966526006178756, 9160938296375094984, 7558788823393136753, 2233929202234404718, 3852013467214334891, 2138887696454789506, 7658106269986212305, 4581885015849258097, 8730274842631860859, 377014662175670459, 2360164409253431476, 757722714242031351, 5727618672407584927, 4895414300590800820, 4784780118595257050, 6174835914378108421, 240600627327598308, 6365821014415607790, 1839866885945413858, 5153010432639520925, 5857589759032663375},{6015445204023212216, 9085100371589518867, 4445726275091525944, 4431177045394440069, 5400109377452857023, 4966119504068031995, 6418122535669015810, 8610158805260034425, 1867911655849344428, 4893197605725312197, 1647170588345612363, 6002300307254701658, 1019910432342041013, 543069838752563560, 6883098667227675923, 3078108516250041887, 6685885943004965580, 8509432026953542816, 3318908747292390933, 3615182682815049647, 3915764286477652462, 5634907105985912286, 7799690322102954840, 8068432228560454035, 668143526307907457, 7447878661659239774},{6927980033027100166, 173654374965763636, 3103475623129474613, 3696349641605548831, 3316868723207732419, 8332128340296382397, 3300285526155183421, 6212659757049113353, 9067431168361752642, 6172877151656823108, 1726974545127310339, 6611015264663788836, 2790270538739616255, 1032797683684321873, 7968441591997655034, 4353354634772937361, 4375996631458598916, 4617289471163614746, 88815264269412253, 8396650305773597364, 7400707073255461607, 7894102009854631296, 8109353044487241263, 4068406067861342162, 2530982334046561687, 1428722272494752005},{6620810872139023631, 3310672590763325702, 1404827770702621436, 5239022257767948574, 1985698298157275281, 3326697527612475114, 6109334219171902064, 6184673295056587045, 2094216777610998912, 2076099595515376807, 7506578735835445851, 788183059013566655, 8691340099864721357, 7681633307074339031, 2661882888242210185, 8345338402614218023, 3646176124974778877, 6374206788132283698, 5886446028689810409, 642333795268282528, 322687589103596741, 5756895136272728706, 2905654101797230447, 4277552816693826595, 3214220353558676449, 6961344935497717986},{2347924984758547019, 8977067394547691012, 2112601065252386809, 5817347321373377004, 7846712858397546021, 6819756651459096879, 4412082237513419255, 1883054621395324603, 1554124961017733307, 817753633987008314, 5041160624985576676, 3393513193032760544, 8686850282345123057, 2267938156760292775, 8481699474269126564, 4514157312870744844, 3691881659524985864, 5399767415565050574, 8701214858900287609, 6491840625706805150, 5865219095638977124, 7842911515888928773, 4256360689958194983, 2296757831515310535, 4177625089079645414, 3950023139142141488},{5360969762484002962, 4668215495668161424, 8828960118929859688, 9087216543392234566, 5727199839994340302, 5551871490567584678, 5244043999639164772, 438983117797415851, 1320115505457930002, 3913908700474345690, 1957030717418368106, 7469182765522359411, 6138026194409366455, 6668769232355040989, 7437001582531290481, 3146749723161357284, 3395375074351938759, 1752774515346290662, 2167090158708032432, 3298500423350610892, 7479601071152927752, 1790557083731517211, 3076463836027445930, 6123305345841918187, 3260740602327006514, 7532005453045831102},{2246148312248980793, 5328891825747472745, 6230657218772199517, 2765522502082763212, 5937990500586272326, 6476035973278585085, 1367510316199835029, 4144722794552935488, 5869214061508369765, 899365025489234760, 1932177870804145738, 7247079041060290069, 8950799144816940184, 296935518185895238, 9004611350819805815, 8264545587597027219, 4567554280961996064, 5111424168903044794, 3603525962961858958, 4334478581490815008, 3667468684517049620, 7363200097528964896, 4385799198778696335, 8218548967157974114, 7644269577960797224, 8085433411896548288},{662131508488070106, 3244484459541597900, 2996948838335552305, 5966524247098760370, 5991463088405193595, 1412504751167287842, 5837976464024204769, 4365390185331469781, 6031490938133601871, 9197110649807330401, 6937515359106366229, 2022466571924290312, 8230779304439690537, 8580334538747057165, 5693618943056175609, 9069323683176110451, 614845874917129937, 862807691448551987, 7968159263280716566, 3240047361545970501, 7161483576444081633, 9025888777565682106, 8017118971473224083, 6803685893048733100, 4124284100374937401, 7000011792448744536},{1494307606235823113, 5194452452979214094, 2426360476117053974, 2373449525080899769, 305636494368696797, 5607565024297937628, 6643784976040582970, 6429760521710035562, 7784166075712818399, 1675058218356215289, 9204493727382203816, 9194272282711302313, 7211018157233383767, 7468480454715081719, 3554960681333359174, 5152169439993406562, 1020781254191530808, 1709345251074709420, 320766456167274696, 6254820388519833056, 4698287189346596700, 187717923433155530, 3121798262332638397, 5811228397082664644, 284330562971494081, 8828138630445313267},{426595342401767329, 1564189559677162738, 4156863756791633997, 4633470221351151158, 739128126563616174, 622923776404791017, 7120050203290218757, 3942309081928268447, 2963525605229217520, 8299388118821354290, 658614539483977611, 8221582431930734064, 3074750369679411015, 35870509170739887, 183240436613393074, 1560697466914951179, 6377653878164438936, 4827639137908386993, 1124705025944320154, 8145176159913316039, 7527908000559316613, 5569934814805775558, 7317056435562081966, 2818441152376870623, 5644910559656269922, 779441449177049402},{1006089723438056114, 5499243109666197129, 5273753525248458975, 1701994552791305447, 2768230144237899821, 5619555533008952694, 7969026510579456702, 2311363649711058510, 1835978053438172033, 5808058677713039712, 2052063184787585245, 8231488078572995708, 4315787797209631235, 8576003862998452972, 6097334216609550729, 1126583184711878636, 992794560991357087, 6211864598310370171, 1295273064526222751, 6641034437796491260, 5108238895314184325, 81121575094893718, 5703073484722660617, 6434658554126562360, 8198834053347811647, 1976894280311069381},{6151155775533394998, 8101634004841825744, 6158092828767174143, 6945387754459397478, 1293183651678488957, 867207350488722580, 2765518277861766845, 1145634148242861609, 246464326715200026, 1724119613226078938, 4016101966458534732, 2561588290771800640, 6701752750842561325, 2866481772458235262, 6354969972008686382, 8144211274781762797, 3032532588316616636, 7380152704211697018, 2817508494047242046, 4444646663572050370, 1030554406917372013, 7848573772777693117, 5076456956470527024, 7538089883203044617, 2165791313855561431, 9182656623660854965},{2570147793689508751, 8449373639697500052, 4107769364783125482, 2415340654337706895, 6403736667808957403, 7468943531894615628, 4132551717064489358, 995540787393907118, 3427400742633388492, 7403335471331825183, 5465179842911171792, 8812362814047825849, 74573073940886316, 1513813848945499542, 1509312622743980039, 1389971816854181364, 4813537706127764701, 5642652533516756043, 6162890810614507695, 338092370050110208, 1909432616462435177, 5270223104474217531, 4910114489824276979, 3222195469602721710, 5578180957512253271, 3538675197973389201},{8967482536204932979, 6062364590330167238, 4854217763755029562, 7692599017271997672, 5348567447127681112, 9098055225892306960, 665420469826115794, 7980870027258441253, 276132245422429090, 1490844809923590415, 5826716145450507648, 7030385439225025604, 1444408112349917988, 5721139334891049037, 5318320987944380457, 6843963093398081222, 4273240108650603290, 7201281492438985091, 8458411727307842075, 4308368741497021420, 2360572597162291976, 5288041489954059061, 6485224291506893718, 5259691180621522973, 5495693446708843851, 3829268826252990983},{4463553565312463347, 7434970435863921247, 5390905535054961537, 2620323746187371650, 761277375677472039, 2534943477751188049, 7621114297160324744, 3288085987100358432, 5362759358558719760, 8673746292585612808, 2441092768336111318, 5724260166558753034, 3288523869587854780, 3036015120594932772, 6428009658261578746, 3440772580322394702, 5245859888494060352, 6398094206480240029, 8913526376073601780, 5089199684814876885, 3829360109184418105, 8718272293706720141, 1355353204803313567, 6015623514075434653, 2108585079715925089, 4218284631394182114}};
	double max[size][size] = {{6883227367313690434, 9072543801372619935, 6250574108808736727, 4079570831727378488, 4873762484771211643, 4773088997473790681, 4739862477238891320, 7601264884149402154, 1751422062594160911, 6259149624967056724, 2965098005672019602, 4794112884547687851, 7373267974324718796, 3748368636635094116, 5157443960714272657, 7274205610250994086, 7975465577546043204, 7940911193197669920, 4660749547640512458, 7373407950020471924, 2961780898005724436, 155502092203929469, 2994435006325870513, 5288956246257249137, 8672847091703603401, 6148895614058710539},{907322592106448088, 4123048477918183200, 4680800042967111736, 8393478031581172352, 3260486573951876566, 5442792388274944361, 7839789663397821251, 5971137164271052464, 3744016573077366416, 8344366066128384457, 133077125176113602, 7666618732478473213, 6317126190712687416, 1644798112213743425, 4233658249000211766, 675128220847409935, 7910970304289436675, 1189874862349531020, 938120230220305458, 1100886158055534552, 1149469260291790536, 7113250360697980976, 3857222333299163387, 7357104107758920833, 6102473249869371216, 3380412004171740368},{4561453492016765242, 2752820483794868678, 4894071901745478438, 2684096583860814982, 2257014088512561236, 5846932278382787089, 5036517988574639921, 5429907759063714875, 2707300673217043519, 1433852714003963429, 4711310374748459509, 306707227132052033, 5351466673972127082, 2949421564640257192, 1230270307750181513, 4748561056666540721, 2999977290137187220, 3022273024392467913, 1441876349591996423, 706350643031089046, 5967033765468262156, 2278959865293707213, 783108634843864285, 5728693919489528132, 3361194305451684134, 4269476712321438655},{7685263463069256239, 8073148998819112841, 3686665707774688422, 5364151289125182235, 6655074346083514031, 8643594770970123603, 27431703317357091, 1285452053898325770, 2623417295771618355, 8317912159856235421, 1512783954828597853, 1167107273157891667, 477504767943496811, 172875437875546992, 3483813338180605629, 3209978050725533143, 4612567315336035751, 4872396216072431018, 3851333437383620164, 7419586288138187797, 2033342754140050563, 207806437268341503, 7541264290915753586, 6346125549998233492, 101454285864605025, 224375636755999158},{3024960354904289584, 8555535248635562327, 1248998850113072188, 7796051780596907901, 5653313644744430370, 7155772003059931613, 4072257980474184732, 2119346437432912654, 1087306784977296661, 40171340183555956, 8874450624748483028, 4973422099408055609, 292792025234859303, 6728831346187641088, 2332949338938333873, 8706138108861847153, 3311701068920713387, 1136536806107801585, 3502590885577275508, 275175447939651734, 3447958289428159382, 7811592322320572015, 5108856601549947920, 7413988547720525109, 1294904229688824818, 4506707067495739226},{7667812504320003415, 8651510230676100438, 121114224975816729, 7819728416177285181, 5396565288980046110, 4084852978647134053, 1466571720170596480, 790081014272891268, 4972718269780834313, 606703507389539351, 1010818117623353994, 7520325288505900820, 4916808677790890353, 3115889369822143145, 9136613237463147630, 1757015659749133740, 3305909309961615587, 479520856003325386, 3723140737673563784, 1864815801208909488, 604231688543334054, 5951370527252498188, 7661162282586797957, 940269308278513721, 2757780703547637477, 6491599582222578367},{663467022177916214, 4878878310301738291, 4360553342991696520, 8124059408349637692, 587166326989845143, 4909237388724231941, 7924328377660529795, 4026530659433010916, 3780674243167770631, 411494033521026495, 1111818311235692488, 5423541551371052702, 2997442237378761034, 4004828846839665475, 1442829004249967665, 135158068610642858, 3180412424518953907, 12504153158127310, 5339039068499520243, 8658378288635614856, 8691331076285541013, 5575034841055047993, 7948820716886290955, 8695012007624007084, 7358971468029098225, 4996466914317146699},{526169263848403657, 7175590483223579955, 1237810549144695931, 1506092898995080009, 8933099349242423212, 2708882453846463897, 6590655182036858377, 2766792949390521282, 7376460790057221563, 2165889023140934893, 6986663684817628113, 5386149698590501773, 8119062543268071727, 3384651153960363763, 8169010252348409172, 929781435794404233, 3238686726990543739, 7786378600810665331, 8470271954913506269, 4128150160279837324, 6986208575386225491, 8751929999204316441, 6489117412771946977, 7354087608228607737, 5997477603391526998, 63024229235009177},{4476953683693569144, 3452072384185075642, 5390782389953615189, 2758776529207184884, 3332086326493611582, 3621131606398567333, 7409637300239675688, 4053834763046136137, 1522240167655207629, 5271249759699505629, 3259144737032582117, 1768773246886133789, 5477612935610386418, 6565419776846319030, 7009610843570134789, 587921042825326371, 1256289959547561898, 4615374082220544238, 2955231075547231655, 7673489257449250356, 2572680309637133390, 4112710143241050364, 4494274028134721422, 3628720515363144134, 6622289690934954765, 2515362972247219922},{6508675035502806676, 5728653777785183630, 3039336279867974160, 6290225758969870428, 8818794971013451481, 5767955194289339529, 7341064881587244, 577932203998906042, 8622048171124105823, 5551586956555517466, 4612294098645598687, 6778631732338114542, 8822744721993839977, 100857310666120438, 6378014728363652703, 1695318364432794217, 2528045891242844856, 4537560956198643136, 6184483887988796191, 9144136552900851785, 1115357064660252580, 8125516324625174540, 6570875898040481830, 7079415465910906895, 6086293094569597868, 5566469833187201378},{5295179791068667736, 7987899744875051959, 3552821621663269840, 5287918635323259036, 4018201492058434883, 5336419505275058754, 1192172039680395700, 6012864396779876213, 3987071396345694909, 5978279485816345059, 4813732048418179972, 7882783993878228552, 3640016630936401708, 1316226241549134365, 995832934715723127, 1319609066491877856, 1395121581078819408, 7263248454701315988, 1303714053110928196, 4046078546964667475, 6704140801580860591, 7582769022381144997, 6702525092690538714, 3801595962225710317, 2861236809687373362, 4691858680316960646},{150943871385322916, 6372645553910230640, 5812593884780063285, 7204110364263955478, 817834371801203038, 8408124846139009094, 6135174370571248063, 6424243283058822854, 2352691640847597107, 2681956067971618670, 2577678900846723162, 4236748262600613261, 1857836127769685690, 26705902892452574, 181703483581378728, 7884939198521724558, 7235684480283758064, 6011361165634044355, 7368474301322925531, 1158760882046761945, 660802829770389633, 1944770260568010158, 7514040114900590626, 66105630528077865, 6543090295348782424, 643317227302628814},{2663780146806114097, 2223085314671835943, 2269215253385243937, 8768509610313750330, 1570211153652082528, 6425193810045949185, 364098531608177334, 9078606898167894420, 4122347276561654846, 5633287176834873062, 5768219987811052829, 7412807961193071898, 3590284123392341983, 2574446302771179236, 288234519450467223, 525730809548074969, 2899374112252888572, 6971497873812201156, 8673147130783980265, 1461858111253212926, 3377710524252725740, 4929255437163895078, 5321629207479530380, 8579832881258578884, 1631019507485210171, 3615446376939262750},{7583674873404318263, 4100579783546138928, 6113720751866673442, 6687449481852644379, 2974384664709486082, 4854845129354815317, 7203983764696702423, 531927537833792833, 2003828143827371485, 870369180032579905, 4778021159498427854, 1102025911564835142, 7185884645627805956, 4643879445895745815, 5743728455151616849, 4639720595804959653, 3938172762184439459, 6075229335775199041, 4238949621527999261, 9011752928979213154, 2380635362944833219, 7840592342129199547, 6320795060640815319, 1996441730873268674, 3545394009544949537, 8443936222939597663},{5294995065773119009, 7248052081048143297, 9032492437121841287, 3581782611098324482, 3724151869332628928, 6002465542703015263, 6654835589340542611, 7755918031526220411, 7780160671436744342, 4621126461414213998, 6396763468823440616, 8414312078553721270, 2428234243093944690, 2888953396930538530, 6491846693706403599, 3187947828126951962, 4281429217407296839, 5195374174137316540, 2778140049356673745, 918954253123465815, 6165522875381060091, 5075990931428243698, 5228987678884772679, 2700081367093940054, 8294658082792216010, 866470271428694626},{1046700874525123432, 6424102718712361971, 4730272533636768303, 7205645651505363650, 4959925332620069587, 3642137578075108942, 2571814080331764805, 5238090667250356628, 6746976576353274665, 7675189898954337996, 5264341383633968399, 4657115360104033899, 7591589059859937981, 388939901625998624, 1908005112763573392, 3846028513604014486, 1940938022013881877, 9059577798985479747, 119750966003183904, 7994520935764403631, 8278747242956608803, 4368176189996673424, 1581738224138121945, 80423753527581476, 893117038564509679, 8774540645829957022},{1622773346768209446, 7077257308315643823, 3539258162334640379, 2508592444688953796, 2915043642011655655, 1796571701654944705, 4044352268448492101, 8557336199296830705, 6663203083513839171, 1121419885255793342, 5144429458290848961, 9141494730372861703, 7304053174624226479, 237973940360489404, 3237745396332836725, 5407832012157901222, 6320357089215783895, 5677506291232661960, 5047599387785432821, 9179897079980932681, 169869994666350004, 1652958891335199859, 1999670648785987221, 3230654583436624152, 5622940371350819351, 3274808409028746896},{8847227825395022340, 9125184332080657195, 3811515475590250356, 367564576771786148, 3860425037323239154, 3095988957706367366, 6283711072665767837, 3718757048743555767, 3313835840968497106, 6003111266676275025, 8744420746481290383, 8199988450843630055, 6853654352032665048, 5784120010723825196, 5410518024961770751, 3449541364169538396, 6935774889666777979, 3370489139725098204, 4329556720532614893, 3872258046792663933, 4737282299504087041, 3587490371914181042, 7413243500628554702, 462444226413635434, 9137685111066315137, 474931529495050557},{1411732432595494137, 8027400865015521355, 5769918728945839629, 5799894910017157564, 5112037909489990700, 1456315395180134424, 478833740917850287, 2452609154889707323, 3224910925160447184, 904503772428512138, 7340170550374620866, 7233716110056527596, 7552140321081385334, 6145509879092697757, 8286369244951589180, 7713224995675713842, 4434644197541557192, 2024625957830682400, 6569167446939891258, 7185108264336046590, 6518344665475794852, 5357065683186705334, 1878010775660921355, 2416494412421351039, 4352226370767386557, 3927371480754019096},{7583845437337932521, 4805645872002986459, 4692810333046037874, 728280828436858459, 4321860644001828460, 8363880204605352953, 6553740022679479497, 3962574958666824394, 1652818708601938790, 2118763883275697871, 6318147132332690620, 1179009711911285410, 8177858128389309377, 7811414186032940004, 7261636462645491848, 714085765836326348, 1950813647373744586, 2647378060626801281, 3467224871441284811, 5900136129085271284, 8222220625142692656, 7133542807431272559, 8400348952203212140, 5470486040340696974, 8974427666538171869, 7481771982758756947},{1021651658924078838, 8514515352776456654, 2785131117858789281, 630534087696665963, 685562691617344412, 5676339601856320091, 5296584182307733751, 2216984686819489781, 7637333351501914111, 115946227808245457, 8585066155728794642, 7236116548774408719, 458977463290856736, 2114124724078074166, 3341828274490883915, 5338811970618301642, 104202142214414180, 8353559603831574090, 5886966245664178548, 1826947982094531141, 609310645904082022, 2241313464207411330, 4317741657433608556, 5687967448611391802, 5431388324857857884, 242885872102828838},{9012888654861386538, 769920793076928559, 2060957663640227018, 1706626917226872377, 6660961658452233238, 6930155977303892027, 5383266679476750614, 8874771601753030017, 1199181445805904857, 2281321835996094497, 3754813306437257646, 8987338484999437866, 4910771204160115794, 2752221560047879083, 7020804379023510128, 2202851410835108724, 3105059626262635423, 6127670211349454556, 2442493019355017820, 2270959466158812739, 6808152170053753718, 7173245897658256103, 8574051526227482988, 3044235191897316804, 344390303919347561, 2023533481679941103},{2678168239937598266, 2472526142278003535, 4166875933195755219, 7838405234101048392, 4847074372605387570, 6776325911977776898, 3039519748721253606, 4676733194995927302, 2721507139060087971, 2674668109444628440, 336331646883754023, 8270274862199358698, 8233807362145499782, 3782358577691002080, 2428273254325206470, 3672625796964215421, 6649234213195782299, 2444074189537192127, 435333678018514399, 8732269991018200315, 8106185267598644567, 6888892534955219197, 5478538284067568908, 2746305052571167928, 599881864136600940, 1184375688355819366},{264333865215439188, 5168599974022419246, 6370639391027963287, 7624754840579626425, 8570296169494735107, 6568671245562917046, 1974764200480436383, 6709166196773766239, 1500388514652711738, 71778080399700361, 7565202395742778968, 7452347199433125714, 4098291107496306751, 3145785721333041614, 3330544110908138189, 3209521451478066851, 3991053873028030529, 9108407746407299359, 8519971929930012906, 8143158972596315065, 5527200848725073426, 5794959745242255581, 5714244586840740236, 3344833244767255676, 1819234323179616537, 2101573451117403904},{664674396411517605, 3326427712859181612, 4038980307560094868, 4251255874357340786, 9112826491611031913, 8119935368705702676, 6164482468049426795, 7804455029408896677, 1224324801498998017, 4691618520083687083, 4608953464655254854, 3217478534195724824, 4777709759915508926, 3652460061004774980, 2173740326306148589, 5071154442856070837, 8852114537425806048, 5676428691609014237, 1296691892482327190, 7090631391894623191, 254864562158535452, 3988170725629978200, 8811671629188381807, 6044474098549416907, 8021940573609669356, 7788511183689327556},{7929240080619025399, 1799220758419201782, 2030267868814498563, 8075294594872325961, 1602954608339068743, 8370305455117560078, 1220255798687532166, 788472763227276660, 948914643481721685, 7588483921930458199, 3128054899103402760, 3072786106897704480, 1323571535956567244, 8397531315554376286, 4474651500151234232, 3333676462066826604, 7531500579193446559, 5640858371258234224, 127657123892455481, 7820506428164081622, 4016821739417591758, 1222755644542142438, 7245599925682956768, 4622988731549982781, 7471517941682969188, 2067936283908438249}};
#endif