package rf;

import android.os.Parcel;
import android.os.Parcelable;
import android.util.Base64;
import com.facebook.react.uimanager.ViewProps;
import java.util.Arrays;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class v0 extends cf.a {
    public static final Parcelable.Creator<v0> CREATOR = new s0(11);

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17368d;

    /* renamed from: e, reason: collision with root package name */
    public final bg.w0 f17369e;

    public v0(boolean z5, bg.w0 w0Var) {
        this.f17368d = z5;
        this.f17369e = w0Var;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof v0)) {
            return false;
        }
        v0 v0Var = (v0) obj;
        return this.f17368d == v0Var.f17368d && bf.t.j(this.f17369e, v0Var.f17369e);
    }

    public final JSONObject h() {
        try {
            JSONObject jSONObject = new JSONObject();
            if (this.f17368d) {
                jSONObject.put(ViewProps.ENABLED, true);
            }
            bg.w0 w0Var = this.f17369e;
            byte[] m5 = w0Var == null ? null : w0Var.m();
            if (m5 != null) {
                JSONObject jSONObject2 = new JSONObject();
                jSONObject2.put("first", Base64.encodeToString(Arrays.copyOf(m5, 32), 11));
                if (m5.length == 64) {
                    jSONObject2.put("second", Base64.encodeToString(Arrays.copyOfRange(m5, 32, 64), 11));
                }
                jSONObject.put("results", jSONObject2);
            }
            return jSONObject;
        } catch (JSONException e9) {
            throw new RuntimeException("Error encoding AuthenticationExtensionsPrfOutputs to JSON object", e9);
        }
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{Boolean.valueOf(this.f17368d), this.f17369e});
    }

    public final String toString() {
        bg.w0 w0Var = this.f17369e;
        byte[] m5 = w0Var == null ? null : w0Var.m();
        StringBuilder sb2 = new StringBuilder("AuthenticationExtensionsPrfOutputs{enabled:");
        sb2.append(this.f17368d);
        sb2.append("outputs:");
        return com.discord.chat.bridge.botuikit.a.l(sb2, m5 != null, "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.H(parcel, 1, 4);
        parcel.writeInt(this.f17368d ? 1 : 0);
        bg.w0 w0Var = this.f17369e;
        ys.l.A(parcel, 2, w0Var == null ? null : w0Var.m());
        ys.l.J(I, parcel);
    }
}
