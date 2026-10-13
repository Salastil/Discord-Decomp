package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/* loaded from: classes3.dex */
public final class w extends cf.a {

    @NonNull
    public static final Parcelable.Creator<w> CREATOR;

    /* renamed from: d, reason: collision with root package name */
    public final a0 f17370d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17371e;

    /* renamed from: i, reason: collision with root package name */
    public final List f17372i;

    static {
        bg.r.i(2, bg.b.f2931i, bg.b.f2932v);
        CREATOR = new kf.b(22);
    }

    public w(String str, byte[] bArr, ArrayList arrayList) {
        bg.w0 w0Var = bg.w0.f3003i;
        bg.w0 k = bg.w0.k(bArr, bArr.length);
        bf.t.g(str);
        try {
            this.f17370d = a0.a(str);
            this.f17371e = k;
            this.f17372i = arrayList;
        } catch (z e9) {
            throw new IllegalArgumentException(e9);
        }
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof w)) {
            return false;
        }
        w wVar = (w) obj;
        List list = wVar.f17372i;
        if (!this.f17370d.equals(wVar.f17370d) || !bf.t.j(this.f17371e, wVar.f17371e)) {
            return false;
        }
        List list2 = this.f17372i;
        if (list2 == null && list == null) {
            return true;
        }
        return list2 != null && list != null && list2.containsAll(list) && list.containsAll(list2);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17370d, this.f17371e, this.f17372i});
    }

    public final String toString() {
        String valueOf = String.valueOf(this.f17370d);
        String b10 = gf.c.b(this.f17371e.m());
        return com.discord.chat.bridge.botuikit.a.j(a3.e.t("PublicKeyCredentialDescriptor{\n type=", valueOf, ", \n id=", b10, ", \n transports="), String.valueOf(this.f17372i), "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        this.f17370d.getClass();
        ys.l.D("public-key", parcel, 2);
        ys.l.A(parcel, 3, this.f17371e.m());
        ys.l.G(parcel, 4, this.f17372i);
        ys.l.J(I, parcel);
    }
}
