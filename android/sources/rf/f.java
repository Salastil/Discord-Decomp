package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.Arrays;
import org.json.JSONException;
import org.json.JSONObject;

/* loaded from: classes3.dex */
public final class f extends cf.a {

    @NonNull
    public static final Parcelable.Creator<f> CREATOR = new s0(7);

    /* renamed from: d, reason: collision with root package name */
    public final k0 f17296d;

    /* renamed from: e, reason: collision with root package name */
    public final u0 f17297e;

    /* renamed from: i, reason: collision with root package name */
    public final g f17298i;

    /* renamed from: v, reason: collision with root package name */
    public final v0 f17299v;

    /* renamed from: w, reason: collision with root package name */
    public final String f17300w;

    public f(k0 k0Var, u0 u0Var, g gVar, v0 v0Var, String str) {
        this.f17296d = k0Var;
        this.f17297e = u0Var;
        this.f17298i = gVar;
        this.f17299v = v0Var;
        this.f17300w = str;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof f)) {
            return false;
        }
        f fVar = (f) obj;
        return bf.t.j(this.f17296d, fVar.f17296d) && bf.t.j(this.f17297e, fVar.f17297e) && bf.t.j(this.f17298i, fVar.f17298i) && bf.t.j(this.f17299v, fVar.f17299v) && bf.t.j(this.f17300w, fVar.f17300w);
    }

    public final JSONObject h() {
        try {
            JSONObject jSONObject = new JSONObject();
            g gVar = this.f17298i;
            if (gVar != null) {
                try {
                    JSONObject jSONObject2 = new JSONObject();
                    jSONObject2.put("rk", gVar.f17303d);
                    jSONObject.put("credProps", jSONObject2);
                } catch (JSONException e9) {
                    throw new RuntimeException("Error encoding AuthenticationExtensionsCredPropsOutputs to JSON object", e9);
                }
            }
            k0 k0Var = this.f17296d;
            if (k0Var != null) {
                jSONObject.put("uvm", k0Var.h());
            }
            v0 v0Var = this.f17299v;
            if (v0Var != null) {
                jSONObject.put("prf", v0Var.h());
            }
            String str = this.f17300w;
            if (str != null) {
                jSONObject.put("txAuthSimple", str);
            }
            return jSONObject;
        } catch (JSONException e10) {
            throw new RuntimeException("Error encoding AuthenticationExtensionsClientOutputs to JSON object", e10);
        }
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.f17296d, this.f17297e, this.f17298i, this.f17299v, this.f17300w});
    }

    public final String toString() {
        return s4.h.f("AuthenticationExtensionsClientOutputs{", h().toString(), "}");
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.C(parcel, 1, this.f17296d, i5);
        ys.l.C(parcel, 2, this.f17297e, i5);
        ys.l.C(parcel, 3, this.f17298i, i5);
        ys.l.C(parcel, 4, this.f17299v, i5);
        ys.l.D(this.f17300w, parcel, 5);
        ys.l.J(I, parcel);
    }
}
