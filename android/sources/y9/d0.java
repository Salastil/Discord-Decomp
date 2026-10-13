package y9;

import android.icu.text.Collator;
import android.icu.text.NumberingSystem;
import android.icu.util.Calendar;
import android.icu.util.ULocale;
import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class d0 {
    public static final gk.i a;

    /* renamed from: b, reason: collision with root package name */
    public static final gk.i f20703b;

    /* renamed from: c, reason: collision with root package name */
    public static final gk.i f20704c;

    /* renamed from: d, reason: collision with root package name */
    public static final gk.i f20705d;

    /* renamed from: e, reason: collision with root package name */
    public static final gk.i f20706e;

    static {
        gk.i iVar = new gk.i();
        iVar.put("ca", "calendar");
        iVar.put("nu", "numbers");
        iVar.put("hc", "hours");
        iVar.put("co", "collation");
        iVar.put("kn", "colnumeric");
        iVar.put("kf", "colcasefirst");
        a = iVar;
        gk.i iVar2 = new gk.i();
        iVar2.put("calendar", "ca");
        iVar2.put("numbers", "nu");
        iVar2.put("hours", "hc");
        iVar2.put("collation", "co");
        iVar2.put("colnumeric", "kn");
        iVar2.put("colcasefirst", "kf");
        f20703b = iVar2;
        gk.i iVar3 = new gk.i();
        iVar3.put("dictionary", "dict");
        iVar3.put("phonebook", "phonebk");
        iVar3.put("traditional", "trad");
        iVar3.put("gb2312han", "gb2312");
        f20704c = iVar3;
        gk.i iVar4 = new gk.i();
        iVar4.put("gregorian", "gregory");
        f20705d = iVar4;
        gk.i iVar5 = new gk.i();
        iVar5.put("traditional", "traditio");
        f20706e = iVar5;
        gk.i iVar6 = new gk.i();
        iVar6.put("nu", new String[]{"adlm", "ahom", "arab", "arabext", "bali", "beng", "bhks", "brah", "cakm", "cham", "deva", "diak", "fullwide", "gong", "gonm", "gujr", "guru", "hanidec", "hmng", "hmnp", "java", "kali", "khmr", "knda", "lana", "lanatham", "laoo", "latn", "lepc", "limb", "mathbold", "mathdbl", "mathmono", "mathsanb", "mathsans", "mlym", "modi", "mong", "mroo", "mtei", "mymr", "mymrshan", "mymrtlng", "newa", "nkoo", "olck", "orya", "osma", "rohg", "saur", "segment", "shrd", "sind", "sinh", "sora", "sund", "takr", "talu", "tamldec", "telu", "thai", "tibt", "tirh", "vaii", "wara", "wcho"});
        iVar6.put("co", new String[]{"big5han", "compat", "dict", "direct", "ducet", "emoji", "eor", "gb2312", "phonebk", "phonetic", "pinyin", "reformed", "searchjl", "stroke", "trad", "unihan", "zhuyin"});
        iVar6.put("ca", new String[]{"buddhist", "chinese", "coptic", "dangi", "ethioaa", "ethiopic", "gregory", "hebrew", "indian", "islamic", "islamic-umalqura", "islamic-tbla", "islamic-civil", "islamic-rgsa", "iso8601", "japanese", "persian", "roc"});
    }

    public static boolean a(String str, String str2, b0 b0Var) {
        ULocale uLocale = (ULocale) b0Var.c();
        String[] strArr = new String[0];
        if (str.equals("co")) {
            if (str2.equals("standard") || str2.equals("search")) {
                return false;
            }
            strArr = Collator.getKeywordValuesForLocale("co", uLocale, false);
        } else if (str.equals("ca")) {
            strArr = Calendar.getKeywordValuesForLocale("ca", uLocale, false);
        } else if (str.equals("nu")) {
            strArr = NumberingSystem.getAvailableNames();
        }
        if (strArr.length == 0) {
            return true;
        }
        return Arrays.asList(strArr).contains(str2);
    }

    public static String b(String str) {
        gk.i iVar = f20704c;
        return !iVar.containsKey(str) ? str : (String) iVar.get(str);
    }

    public static Object c(Object obj, String str) {
        if (str.equals("ca") && (obj instanceof String)) {
            String str2 = (String) obj;
            gk.i iVar = f20705d;
            return !iVar.containsKey(str2) ? str2 : (String) iVar.get(str2);
        }
        if (!str.equals("nu") || !(obj instanceof String)) {
            return (str.equals("co") && (obj instanceof String)) ? b((String) obj) : (str.equals("kn") && (obj instanceof String) && obj.equals("yes")) ? "true" : ((str.equals("kn") || str.equals("kf")) && (obj instanceof String) && obj.equals("no")) ? "false" : obj;
        }
        String str3 = (String) obj;
        gk.i iVar2 = f20706e;
        return !iVar2.containsKey(str3) ? str3 : (String) iVar2.get(str3);
    }
}
