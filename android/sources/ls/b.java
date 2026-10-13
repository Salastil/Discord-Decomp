package ls;

import java.text.DateFormatSymbols;
import java.text.Normalizer;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class b implements h0 {
    public final /* synthetic */ int a;

    public static String[] h(String[] strArr, int i5) {
        String[] strArr2 = new String[i5];
        for (int i6 = 0; i6 < i5; i6++) {
            if (strArr[i6].isEmpty()) {
                strArr2[i6] = String.valueOf(i6 + 1);
            } else {
                strArr2[i6] = i(strArr[i6]);
            }
        }
        return strArr2;
    }

    public static String i(String str) {
        char charAt = Normalizer.normalize(str, Normalizer.Form.NFD).charAt(0);
        return (charAt < 'A' || charAt > 'Z') ? (charAt < 'a' || charAt > 'z') ? (charAt < 1040 || charAt > 1071) ? (charAt < 1072 || charAt > 1103) ? str : String.valueOf((char) (charAt - ' ')) : String.valueOf(charAt) : String.valueOf((char) (charAt - ' ')) : String.valueOf(charAt);
    }

    @Override // ls.h0
    public final String[] a(Locale locale, i0 i0Var, y yVar) {
        switch (this.a) {
            case 0:
                return i0Var == i0.f14238v ? new String[]{"A", "P"} : new String[]{"AM", "PM"};
            default:
                return i0Var == i0.f14238v ? new String[]{"A", "P"} : DateFormatSymbols.getInstance(locale).getAmPmStrings();
        }
    }

    @Override // ls.h0
    public final String[] b(String str, Locale locale, i0 i0Var) {
        switch (this.a) {
            case 0:
                return i0Var == i0.f14238v ? new String[]{"B", "A"} : new String[]{"BC", "AD"};
            default:
                DateFormatSymbols dateFormatSymbols = DateFormatSymbols.getInstance(locale);
                if (i0Var != i0.f14238v) {
                    return dateFormatSymbols.getEras();
                }
                String[] eras = dateFormatSymbols.getEras();
                String[] strArr = new String[eras.length];
                int length = eras.length;
                for (int i5 = 0; i5 < length; i5++) {
                    if (!eras[i5].isEmpty()) {
                        strArr[i5] = i(eras[i5]);
                    } else if (i5 == 0 && eras.length == 2) {
                        strArr[i5] = "B";
                    } else if (i5 == 1 && eras.length == 2) {
                        strArr[i5] = "A";
                    } else {
                        strArr[i5] = String.valueOf(i5);
                    }
                }
                return strArr;
        }
    }

    @Override // ls.h0
    public final String[] c(String str, Locale locale, i0 i0Var, y yVar, boolean z5) {
        switch (this.a) {
            case 0:
                return i0Var == i0.f14235d ? new String[]{"01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12", "13"} : new String[]{"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13"};
            default:
                DateFormatSymbols dateFormatSymbols = DateFormatSymbols.getInstance(locale);
                int ordinal = i0Var.ordinal();
                if (ordinal == 0) {
                    return dateFormatSymbols.getMonths();
                }
                if (ordinal == 1 || ordinal == 2) {
                    return dateFormatSymbols.getShortMonths();
                }
                if (ordinal == 3) {
                    return h(dateFormatSymbols.getShortMonths(), 12);
                }
                throw new UnsupportedOperationException(i0Var.name());
        }
    }

    @Override // ls.h0
    public final boolean d(Locale locale) {
        switch (this.a) {
            case 0:
                return true;
            default:
                String language = locale.getLanguage();
                for (Locale locale2 : DateFormatSymbols.getAvailableLocales()) {
                    if (locale2.getLanguage().equals(language)) {
                        return true;
                    }
                }
                return false;
        }
    }

    @Override // ls.h0
    public final boolean e(String str) {
        switch (this.a) {
            case 0:
                return true;
            default:
                return "iso8601".equals(str);
        }
    }

    @Override // ls.h0
    public final String[] f(Locale locale, i0 i0Var, y yVar) {
        String[] weekdays;
        switch (this.a) {
            case 0:
                return new String[]{"1", "2", "3", "4", "5", "6", "7"};
            default:
                DateFormatSymbols dateFormatSymbols = DateFormatSymbols.getInstance(locale);
                int ordinal = i0Var.ordinal();
                if (ordinal == 0) {
                    weekdays = dateFormatSymbols.getWeekdays();
                } else if (ordinal == 1 || ordinal == 2) {
                    weekdays = dateFormatSymbols.getShortWeekdays();
                } else {
                    if (ordinal != 3) {
                        throw new UnsupportedOperationException("Unknown text width: " + i0Var);
                    }
                    weekdays = h(f(locale, i0.f14237i, yVar), 7);
                }
                if (weekdays.length <= 7) {
                    return weekdays;
                }
                String str = weekdays[1];
                String[] strArr = new String[7];
                System.arraycopy(weekdays, 2, strArr, 0, 6);
                strArr[6] = str;
                return strArr;
        }
    }

    @Override // ls.h0
    public final String[] g(Locale locale, i0 i0Var, y yVar) {
        switch (this.a) {
            case 0:
                if (i0Var != i0.f14238v) {
                    break;
                } else {
                    break;
                }
        }
        return new String[]{"Q1", "Q2", "Q3", "Q4"};
    }

    public final String toString() {
        switch (this.a) {
            case 0:
                return "FallbackProvider";
            default:
                return "JDKTextProvider";
        }
    }
}
