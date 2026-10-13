package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b0 extends cf.a {

    @NonNull
    public static final Parcelable.Creator<b0> CREATOR = new kf.b(27);

    /* renamed from: d, reason: collision with root package name */
    public final bg.w0 f17280d;

    /* renamed from: e, reason: collision with root package name */
    public final String f17281e;

    /* renamed from: i, reason: collision with root package name */
    public final String f17282i;

    /* renamed from: v, reason: collision with root package name */
    public final String f17283v;

    public b0(String str, String str2, String str3, byte[] bArr) {
        bf.t.g(bArr);
        this.f17280d = bg.w0.k(bArr, bArr.length);
        bf.t.g(str);
        this.f17281e = str;
        this.f17282i = str2;
        bf.t.g(str3);
        this.f17283v = str3;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof b0)) {
            return false;
        }
        b0 b0Var = (b0) obj;
        return bf.t.j(this.f17280d, b0Var.f17280d) && bf.t.j(this.f17281e, b0Var.f17281e) && bf.t.j(this.f17282i, b0Var.f17282i) && bf.t.j(this.f17283v, b0Var.f17283v);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17280d, this.f17281e, this.f17282i, this.f17283v});
    }

    public final String toString() {
        StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("PublicKeyCredentialUserEntity{\n id=", gf.c.b(this.f17280d.m()), ", \n name='");
        m5.append(this.f17281e);
        m5.append("', \n icon='");
        m5.append(this.f17282i);
        m5.append("', \n displayName='");
        return com.discord.chat.bridge.botuikit.a.j(m5, this.f17283v, "'}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.A(parcel, 2, this.f17280d.m());
        ys.l.D(this.f17281e, parcel, 3);
        ys.l.D(this.f17282i, parcel, 4);
        ys.l.D(this.f17283v, parcel, 5);
        ys.l.J(I, parcel);
    }
}
