package id;

import android.os.Parcel;
import android.os.Parcelable;
import fi.e0;
import fi.r0;
import hc.u0;
import java.util.ArrayList;
import ke.d0;

/* loaded from: classes3.dex */
public final class n extends j {
    public static final Parcelable.Creator<n> CREATOR = new gd.a(16);

    /* renamed from: e, reason: collision with root package name */
    public final String f10647e;

    /* renamed from: i, reason: collision with root package name */
    public final String f10648i;

    /* renamed from: v, reason: collision with root package name */
    public final e0 f10649v;

    public n(String str, String str2, r0 r0Var) {
        super(str);
        ke.b.g(!r0Var.isEmpty());
        this.f10647e = str2;
        e0 k = e0.k(r0Var);
        this.f10649v = k;
        this.f10648i = (String) k.get(0);
    }

    public static ArrayList a(String str) {
        ArrayList arrayList = new ArrayList();
        try {
            if (str.length() >= 10) {
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(0, 4))));
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(5, 7))));
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(8, 10))));
                return arrayList;
            }
            if (str.length() >= 7) {
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(0, 4))));
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(5, 7))));
                return arrayList;
            }
            if (str.length() >= 4) {
                arrayList.add(Integer.valueOf(Integer.parseInt(str.substring(0, 4))));
            }
            return arrayList;
        } catch (NumberFormatException unused) {
            return new ArrayList();
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && n.class == obj.getClass()) {
            n nVar = (n) obj;
            if (d0.a(this.f10636d, nVar.f10636d) && d0.a(this.f10647e, nVar.f10647e) && this.f10649v.equals(nVar.f10649v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int d6 = a3.e.d(527, 31, this.f10636d);
        String str = this.f10647e;
        return this.f10649v.hashCode() + ((d6 + (str != null ? str.hashCode() : 0)) * 31);
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // dd.b
    public final void o(u0 u0Var) {
        char c6;
        String str = this.f10636d;
        str.getClass();
        switch (str.hashCode()) {
            case 82815:
                if (str.equals("TAL")) {
                    c6 = 0;
                    break;
                }
                c6 = 65535;
                break;
            case 82878:
                if (str.equals("TCM")) {
                    c6 = 1;
                    break;
                }
                c6 = 65535;
                break;
            case 82897:
                if (str.equals("TDA")) {
                    c6 = 2;
                    break;
                }
                c6 = 65535;
                break;
            case 83253:
                if (str.equals("TP1")) {
                    c6 = 3;
                    break;
                }
                c6 = 65535;
                break;
            case 83254:
                if (str.equals("TP2")) {
                    c6 = 4;
                    break;
                }
                c6 = 65535;
                break;
            case 83255:
                if (str.equals("TP3")) {
                    c6 = 5;
                    break;
                }
                c6 = 65535;
                break;
            case 83341:
                if (str.equals("TRK")) {
                    c6 = 6;
                    break;
                }
                c6 = 65535;
                break;
            case 83378:
                if (str.equals("TT2")) {
                    c6 = 7;
                    break;
                }
                c6 = 65535;
                break;
            case 83536:
                if (str.equals("TXT")) {
                    c6 = '\b';
                    break;
                }
                c6 = 65535;
                break;
            case 83552:
                if (str.equals("TYE")) {
                    c6 = '\t';
                    break;
                }
                c6 = 65535;
                break;
            case 2567331:
                if (str.equals("TALB")) {
                    c6 = '\n';
                    break;
                }
                c6 = 65535;
                break;
            case 2569357:
                if (str.equals("TCOM")) {
                    c6 = 11;
                    break;
                }
                c6 = 65535;
                break;
            case 2569891:
                if (str.equals("TDAT")) {
                    c6 = '\f';
                    break;
                }
                c6 = 65535;
                break;
            case 2570401:
                if (str.equals("TDRC")) {
                    c6 = '\r';
                    break;
                }
                c6 = 65535;
                break;
            case 2570410:
                if (str.equals("TDRL")) {
                    c6 = 14;
                    break;
                }
                c6 = 65535;
                break;
            case 2571565:
                if (str.equals("TEXT")) {
                    c6 = 15;
                    break;
                }
                c6 = 65535;
                break;
            case 2575251:
                if (str.equals("TIT2")) {
                    c6 = 16;
                    break;
                }
                c6 = 65535;
                break;
            case 2581512:
                if (str.equals("TPE1")) {
                    c6 = 17;
                    break;
                }
                c6 = 65535;
                break;
            case 2581513:
                if (str.equals("TPE2")) {
                    c6 = 18;
                    break;
                }
                c6 = 65535;
                break;
            case 2581514:
                if (str.equals("TPE3")) {
                    c6 = 19;
                    break;
                }
                c6 = 65535;
                break;
            case 2583398:
                if (str.equals("TRCK")) {
                    c6 = 20;
                    break;
                }
                c6 = 65535;
                break;
            case 2590194:
                if (str.equals("TYER")) {
                    c6 = 21;
                    break;
                }
                c6 = 65535;
                break;
            default:
                c6 = 65535;
                break;
        }
        e0 e0Var = this.f10649v;
        try {
            switch (c6) {
                case 0:
                case '\n':
                    u0Var.f9895c = (CharSequence) e0Var.get(0);
                    break;
                case 1:
                case 11:
                    u0Var.f9915y = (CharSequence) e0Var.get(0);
                    break;
                case 2:
                case '\f':
                    String str2 = (String) e0Var.get(0);
                    int parseInt = Integer.parseInt(str2.substring(2, 4));
                    int parseInt2 = Integer.parseInt(str2.substring(0, 2));
                    u0Var.f9909s = Integer.valueOf(parseInt);
                    u0Var.f9910t = Integer.valueOf(parseInt2);
                    break;
                case 3:
                case 17:
                    u0Var.f9894b = (CharSequence) e0Var.get(0);
                    break;
                case 4:
                case 18:
                    u0Var.f9896d = (CharSequence) e0Var.get(0);
                    break;
                case 5:
                case 19:
                    u0Var.f9916z = (CharSequence) e0Var.get(0);
                    break;
                case 6:
                case 20:
                    String str3 = (String) e0Var.get(0);
                    int i5 = d0.a;
                    String[] split = str3.split("/", -1);
                    int parseInt3 = Integer.parseInt(split[0]);
                    Integer valueOf = split.length > 1 ? Integer.valueOf(Integer.parseInt(split[1])) : null;
                    u0Var.f9903m = Integer.valueOf(parseInt3);
                    u0Var.f9904n = valueOf;
                    break;
                case 7:
                case 16:
                    u0Var.a = (CharSequence) e0Var.get(0);
                    break;
                case '\b':
                case 15:
                    u0Var.f9914x = (CharSequence) e0Var.get(0);
                    break;
                case '\t':
                case 21:
                    u0Var.f9908r = Integer.valueOf(Integer.parseInt((String) e0Var.get(0)));
                    break;
                case '\r':
                    ArrayList a = a((String) e0Var.get(0));
                    int size = a.size();
                    if (size != 1) {
                        if (size != 2) {
                            if (size == 3) {
                                u0Var.f9910t = (Integer) a.get(2);
                            }
                        }
                        u0Var.f9909s = (Integer) a.get(1);
                    }
                    u0Var.f9908r = (Integer) a.get(0);
                    break;
                case 14:
                    ArrayList a10 = a((String) e0Var.get(0));
                    int size2 = a10.size();
                    if (size2 != 1) {
                        if (size2 != 2) {
                            if (size2 == 3) {
                                u0Var.f9913w = (Integer) a10.get(2);
                            }
                        }
                        u0Var.f9912v = (Integer) a10.get(1);
                    }
                    u0Var.f9911u = (Integer) a10.get(0);
                    break;
            }
        } catch (NumberFormatException | StringIndexOutOfBoundsException unused) {
        }
    }

    @Override // id.j
    public final String toString() {
        return this.f10636d + ": description=" + this.f10647e + ": values=" + this.f10649v;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeString(this.f10636d);
        parcel.writeString(this.f10647e);
        parcel.writeStringArray((String[]) this.f10649v.toArray(new String[0]));
    }
}
