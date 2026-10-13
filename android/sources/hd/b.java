package hd;

import a3.e;
import android.os.Parcel;
import android.os.Parcelable;
import hc.u0;
import java.util.List;
import java.util.Map;
import ke.d0;

/* loaded from: classes3.dex */
public final class b implements dd.b {
    public static final Parcelable.Creator<b> CREATOR = new gd.a(2);

    /* renamed from: d, reason: collision with root package name */
    public final int f9950d;

    /* renamed from: e, reason: collision with root package name */
    public final String f9951e;

    /* renamed from: i, reason: collision with root package name */
    public final String f9952i;

    /* renamed from: v, reason: collision with root package name */
    public final String f9953v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f9954w;

    /* renamed from: x, reason: collision with root package name */
    public final int f9955x;

    public b(String str, String str2, String str3, int i5, int i6, boolean z5) {
        ke.b.g(i6 == -1 || i6 > 0);
        this.f9950d = i5;
        this.f9951e = str;
        this.f9952i = str2;
        this.f9953v = str3;
        this.f9954w = z5;
        this.f9955x = i6;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x004b  */
    /* JADX WARN: Removed duplicated region for block: B:15:0x005f  */
    /* JADX WARN: Removed duplicated region for block: B:18:0x0073  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x0087  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00a1  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:43:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0096  */
    /* JADX WARN: Removed duplicated region for block: B:45:0x007c  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0068  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x0054  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static b a(Map map) {
        boolean z5;
        int i5;
        List list;
        String str;
        List list2;
        String str2;
        List list3;
        String str3;
        List list4;
        boolean z6;
        List list5;
        int i6;
        List list6 = (List) map.get("icy-br");
        boolean z7 = true;
        int i10 = -1;
        if (list6 != null) {
            String str4 = (String) list6.get(0);
            try {
                i6 = Integer.parseInt(str4) * 1000;
                if (i6 > 0) {
                    z5 = true;
                } else {
                    try {
                        ke.b.N("IcyHeaders", "Invalid bitrate: " + str4);
                        z5 = false;
                        i6 = -1;
                    } catch (NumberFormatException unused) {
                        e.x("Invalid bitrate header: ", str4, "IcyHeaders");
                        z5 = false;
                        i5 = i6;
                        list = (List) map.get("icy-genre");
                        if (list == null) {
                        }
                        list2 = (List) map.get("icy-name");
                        if (list2 == null) {
                        }
                        list3 = (List) map.get("icy-url");
                        if (list3 == null) {
                        }
                        list4 = (List) map.get("icy-pub");
                        if (list4 == null) {
                        }
                        list5 = (List) map.get("icy-metaint");
                        if (list5 != null) {
                        }
                        int i11 = i10;
                        if (z5) {
                        }
                    }
                }
            } catch (NumberFormatException unused2) {
                i6 = -1;
            }
            i5 = i6;
        } else {
            z5 = false;
            i5 = -1;
        }
        list = (List) map.get("icy-genre");
        if (list == null) {
            str = (String) list.get(0);
            z5 = true;
        } else {
            str = null;
        }
        list2 = (List) map.get("icy-name");
        if (list2 == null) {
            str2 = (String) list2.get(0);
            z5 = true;
        } else {
            str2 = null;
        }
        list3 = (List) map.get("icy-url");
        if (list3 == null) {
            str3 = (String) list3.get(0);
            z5 = true;
        } else {
            str3 = null;
        }
        list4 = (List) map.get("icy-pub");
        if (list4 == null) {
            z6 = ((String) list4.get(0)).equals("1");
            z5 = true;
        } else {
            z6 = false;
        }
        list5 = (List) map.get("icy-metaint");
        if (list5 != null) {
            String str5 = (String) list5.get(0);
            try {
                int parseInt = Integer.parseInt(str5);
                if (parseInt > 0) {
                    i10 = parseInt;
                } else {
                    try {
                        ke.b.N("IcyHeaders", "Invalid metadata interval: " + str5);
                        z7 = z5;
                    } catch (NumberFormatException unused3) {
                        i10 = parseInt;
                        e.x("Invalid metadata interval: ", str5, "IcyHeaders");
                        int i112 = i10;
                        if (z5) {
                        }
                    }
                }
                z5 = z7;
            } catch (NumberFormatException unused4) {
            }
        }
        int i1122 = i10;
        if (z5) {
            return new b(str, str2, str3, i5, i1122, z6);
        }
        return null;
    }

    @Override // android.os.Parcelable
    public final int describeContents() {
        return 0;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && b.class == obj.getClass()) {
            b bVar = (b) obj;
            if (this.f9950d == bVar.f9950d && d0.a(this.f9951e, bVar.f9951e) && d0.a(this.f9952i, bVar.f9952i) && d0.a(this.f9953v, bVar.f9953v) && this.f9954w == bVar.f9954w && this.f9955x == bVar.f9955x) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int i5 = (527 + this.f9950d) * 31;
        String str = this.f9951e;
        int hashCode = (i5 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.f9952i;
        int hashCode2 = (hashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.f9953v;
        return ((((hashCode2 + (str3 != null ? str3.hashCode() : 0)) * 31) + (this.f9954w ? 1 : 0)) * 31) + this.f9955x;
    }

    @Override // dd.b
    public final void o(u0 u0Var) {
        String str = this.f9952i;
        if (str != null) {
            u0Var.E = str;
        }
        String str2 = this.f9951e;
        if (str2 != null) {
            u0Var.C = str2;
        }
    }

    public final String toString() {
        return "IcyHeaders: name=\"" + this.f9952i + "\", genre=\"" + this.f9951e + "\", bitrate=" + this.f9950d + ", metadataInterval=" + this.f9955x;
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        parcel.writeInt(this.f9950d);
        parcel.writeString(this.f9951e);
        parcel.writeString(this.f9952i);
        parcel.writeString(this.f9953v);
        int i6 = d0.a;
        parcel.writeInt(this.f9954w ? 1 : 0);
        parcel.writeInt(this.f9955x);
    }

    public b(Parcel parcel) {
        this.f9950d = parcel.readInt();
        this.f9951e = parcel.readString();
        this.f9952i = parcel.readString();
        this.f9953v = parcel.readString();
        int i5 = d0.a;
        this.f9954w = parcel.readInt() != 0;
        this.f9955x = parcel.readInt();
    }
}
