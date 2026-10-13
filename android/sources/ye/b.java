package ye;

import android.app.PendingIntent;
import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import bf.t;
import e4.r;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b extends cf.a {

    /* renamed from: d, reason: collision with root package name */
    public final int f20905d;

    /* renamed from: e, reason: collision with root package name */
    public final int f20906e;

    /* renamed from: i, reason: collision with root package name */
    public final PendingIntent f20907i;

    /* renamed from: v, reason: collision with root package name */
    public final String f20908v;

    /* renamed from: w, reason: collision with root package name */
    public final Integer f20909w;

    /* renamed from: x, reason: collision with root package name */
    public static final b f20904x = new b(0, null, null);

    @NonNull
    public static final Parcelable.Creator<b> CREATOR = new sf.c(22);

    public b(int i5, int i6, PendingIntent pendingIntent, String str, Integer num) {
        this.f20905d = i5;
        this.f20906e = i6;
        this.f20907i = pendingIntent;
        this.f20908v = str;
        this.f20909w = num;
    }

    public static String h(int i5) {
        if (i5 == 99) {
            return "UNFINISHED";
        }
        if (i5 == 1500) {
            return "DRIVE_EXTERNAL_STORAGE_REQUIRED";
        }
        switch (i5) {
            case -1:
                return "UNKNOWN";
            case 0:
                return "SUCCESS";
            case 1:
                return "SERVICE_MISSING";
            case 2:
                return "SERVICE_VERSION_UPDATE_REQUIRED";
            case 3:
                return "SERVICE_DISABLED";
            case 4:
                return "SIGN_IN_REQUIRED";
            case 5:
                return "INVALID_ACCOUNT";
            case 6:
                return "RESOLUTION_REQUIRED";
            case 7:
                return "NETWORK_ERROR";
            case 8:
                return "INTERNAL_ERROR";
            case 9:
                return "SERVICE_INVALID";
            case 10:
                return "DEVELOPER_ERROR";
            case 11:
                return "LICENSE_CHECK_FAILED";
            default:
                switch (i5) {
                    case 13:
                        return "CANCELED";
                    case 14:
                        return "TIMEOUT";
                    case 15:
                        return "INTERRUPTED";
                    case 16:
                        return "API_UNAVAILABLE";
                    case 17:
                        return "SIGN_IN_FAILED";
                    case 18:
                        return "SERVICE_UPDATING";
                    case 19:
                        return "SERVICE_MISSING_PERMISSION";
                    case 20:
                        return "RESTRICTED_PROFILE";
                    case 21:
                        return "API_VERSION_UPDATE_REQUIRED";
                    case 22:
                        return "RESOLUTION_ACTIVITY_NOT_FOUND";
                    case 23:
                        return "API_DISABLED";
                    case 24:
                        return "API_DISABLED_FOR_CONNECTION";
                    case 25:
                        return "API_INSTALL_REQUIRED";
                    default:
                        StringBuilder sb2 = new StringBuilder(String.valueOf(i5).length() + 20);
                        sb2.append("UNKNOWN_ERROR_CODE(");
                        sb2.append(i5);
                        sb2.append(")");
                        return sb2.toString();
                }
        }
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof b)) {
            return false;
        }
        b bVar = (b) obj;
        return this.f20906e == bVar.f20906e && t.j(this.f20907i, bVar.f20907i) && t.j(this.f20908v, bVar.f20908v) && t.j(this.f20909w, bVar.f20909w);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(this.f20906e), this.f20907i, this.f20908v, this.f20909w});
    }

    public final String toString() {
        r rVar = new r(this);
        rVar.e(h(this.f20906e), "statusCode");
        rVar.e(this.f20907i, "resolution");
        rVar.e(this.f20908v, "message");
        rVar.e(this.f20909w, "clientMethodKey");
        return rVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f20905d);
        ys.l.H(parcel, 2, 4);
        parcel.writeInt(this.f20906e);
        ys.l.C(parcel, 3, this.f20907i, i5);
        ys.l.D(this.f20908v, parcel, 4);
        ys.l.B(parcel, 5, this.f20909w);
        ys.l.J(I, parcel);
    }

    public b(int i5, PendingIntent pendingIntent, String str) {
        this(1, i5, pendingIntent, str, null);
    }
}
