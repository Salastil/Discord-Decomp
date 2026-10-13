package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class l extends cf.a {

    @NonNull
    public static final Parcelable.Creator<l> CREATOR = new s0(15);

    /* renamed from: d, reason: collision with root package name */
    public final c f17322d;

    /* renamed from: e, reason: collision with root package name */
    public final Boolean f17323e;

    /* renamed from: i, reason: collision with root package name */
    public final j0 f17324i;

    /* renamed from: v, reason: collision with root package name */
    public final e0 f17325v;

    public l(String str, Boolean bool, String str2, String str3) {
        c a;
        e0 e0Var = null;
        if (str == null) {
            a = null;
        } else {
            try {
                a = c.a(str);
            } catch (b | d0 | t0 e9) {
                throw new IllegalArgumentException(e9);
            }
        }
        this.f17322d = a;
        this.f17323e = bool;
        this.f17324i = str2 == null ? null : j0.a(str2);
        if (str3 != null) {
            e0Var = e0.a(str3);
        }
        this.f17325v = e0Var;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof l)) {
            return false;
        }
        l lVar = (l) obj;
        return bf.t.j(this.f17322d, lVar.f17322d) && bf.t.j(this.f17323e, lVar.f17323e) && bf.t.j(this.f17324i, lVar.f17324i) && bf.t.j(h(), lVar.h());
    }

    public final e0 h() {
        e0 e0Var = this.f17325v;
        if (e0Var != null) {
            return e0Var;
        }
        Boolean bool = this.f17323e;
        return (bool == null || !bool.booleanValue()) ? e0.RESIDENT_KEY_DISCOURAGED : e0.RESIDENT_KEY_REQUIRED;
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17322d, this.f17323e, this.f17324i, h()});
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f17322d);
        String valueOf2 = String.valueOf(this.f17324i);
        String valueOf3 = String.valueOf(this.f17325v);
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("AuthenticatorSelectionCriteria{\n attachment=", valueOf, ", \n requireResidentKey=");
        m5.append(this.f17323e);
        m5.append(", \n requireUserVerification=");
        m5.append(valueOf2);
        m5.append(", \n residentKeyRequirement=");
        return com.discord.chat.bridge.botuikit.a.j(m5, valueOf3, "\n }");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        c cVar = this.f17322d;
        ys.l.D(cVar == null ? null : cVar.f17285d, parcel, 2);
        Boolean bool = this.f17323e;
        if (bool != null) {
            ys.l.H(parcel, 3, 4);
            parcel.writeInt(bool.booleanValue() ? 1 : 0);
        }
        j0 j0Var = this.f17324i;
        ys.l.D(j0Var != null ? j0Var.f17320d : null, parcel, 4);
        ys.l.D(h().f17295d, parcel, 5);
        ys.l.J(I, parcel);
    }
}
