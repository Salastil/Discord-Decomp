package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class h extends k {

    @NonNull
    public static final Parcelable.Creator<h> CREATOR = new s0(12);

    /* renamed from: d, reason: collision with root package name */
    public final bg.w0 f17304d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17305e;

    /* renamed from: i, reason: collision with root package name */
    public final bg.w0 f17306i;

    /* renamed from: v, reason: collision with root package name */
    public final bg.w0 f17307v;

    /* renamed from: w, reason: collision with root package name */
    public final bg.w0 f17308w;

    public h(byte[] bArr, byte[] bArr2, byte[] bArr3, byte[] bArr4, byte[] bArr5) {
        bf.t.g(bArr);
        bg.w0 k = bg.w0.k(bArr, bArr.length);
        bf.t.g(bArr2);
        bg.w0 k5 = bg.w0.k(bArr2, bArr2.length);
        bf.t.g(bArr3);
        bg.w0 k7 = bg.w0.k(bArr3, bArr3.length);
        bf.t.g(bArr4);
        bg.w0 k10 = bg.w0.k(bArr4, bArr4.length);
        bg.w0 k11 = bArr5 == null ? null : bg.w0.k(bArr5, bArr5.length);
        this.f17304d = k;
        this.f17305e = k5;
        this.f17306i = k7;
        this.f17307v = k10;
        this.f17308w = k11;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof h)) {
            return false;
        }
        h hVar = (h) obj;
        return bf.t.j(this.f17304d, hVar.f17304d) && bf.t.j(this.f17305e, hVar.f17305e) && bf.t.j(this.f17306i, hVar.f17306i) && bf.t.j(this.f17307v, hVar.f17307v) && bf.t.j(this.f17308w, hVar.f17308w);
    }

    public final JSONObject h() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("clientDataJSON", gf.c.b(this.f17305e.m()));
            jSONObject.put("authenticatorData", gf.c.b(this.f17306i.m()));
            jSONObject.put("signature", gf.c.b(this.f17307v.m()));
            bg.w0 w0Var = this.f17308w;
            if (w0Var == null) {
                return jSONObject;
            }
            jSONObject.put("userHandle", gf.c.b(w0Var == null ? null : w0Var.m()));
            return jSONObject;
        } catch (JSONException e9) {
            throw new RuntimeException("Error encoding AuthenticatorAssertionResponse to JSON object", e9);
        }
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Integer.valueOf(Arrays.hashCode(new Object[]{this.f17304d})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17305e})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17306i})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17307v})), Integer.valueOf(Arrays.hashCode(new Object[]{this.f17308w}))});
    }

    public final String toString() {
        e4.m mVar = new e4.m(getClass().getSimpleName(), 9);
        bg.o0 o0Var = bg.q0.f2985d;
        byte[] m5 = this.f17304d.m();
        mVar.k0("keyHandle", o0Var.c(m5, m5.length));
        byte[] m6 = this.f17305e.m();
        mVar.k0("clientDataJSON", o0Var.c(m6, m6.length));
        byte[] m7 = this.f17306i.m();
        mVar.k0("authenticatorData", o0Var.c(m7, m7.length));
        byte[] m10 = this.f17307v.m();
        mVar.k0("signature", o0Var.c(m10, m10.length));
        bg.w0 w0Var = this.f17308w;
        byte[] m11 = w0Var == null ? null : w0Var.m();
        if (m11 != null) {
            mVar.k0("userHandle", o0Var.c(m11, m11.length));
        }
        return mVar.toString();
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.A(parcel, 2, this.f17304d.m());
        ys.l.A(parcel, 3, this.f17305e.m());
        ys.l.A(parcel, 4, this.f17306i.m());
        ys.l.A(parcel, 5, this.f17307v.m());
        bg.w0 w0Var = this.f17308w;
        ys.l.A(parcel, 6, w0Var == null ? null : w0Var.m());
        ys.l.J(I, parcel);
    }
}
