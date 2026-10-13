package rf;

import android.os.Parcel;
import android.os.Parcelable;
import androidx.annotation.NonNull;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONException;

/* loaded from: classes3.dex */
public final class k0 extends cf.a {

    @NonNull
    public static final Parcelable.Creator<k0> CREATOR = new s0(5);

    /* renamed from: d, reason: collision with root package name */
    public final List f17321d;

    public k0(ArrayList arrayList) {
        this.f17321d = arrayList;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof k0)) {
            return false;
        }
        List list = ((k0) obj).f17321d;
        List list2 = this.f17321d;
        if (list2 == null && list == null) {
            return true;
        }
        return list2 != null && list != null && list2.containsAll(list) && list.containsAll(list2);
    }

    public final JSONArray h() {
        try {
            JSONArray jSONArray = new JSONArray();
            List list = this.f17321d;
            if (list != null) {
                for (int i5 = 0; i5 < list.size(); i5++) {
                    l0 l0Var = (l0) list.get(i5);
                    JSONArray jSONArray2 = new JSONArray();
                    jSONArray2.put(l0Var.f17326d);
                    jSONArray2.put(Short.toString(l0Var.f17327e));
                    jSONArray2.put(Short.toString(l0Var.f17328i));
                    jSONArray.put(i5, jSONArray2);
                }
            }
            return jSONArray;
        } catch (JSONException e9) {
            throw new RuntimeException("Error encoding UvmEntries to JSON object", e9);
        }
    }

    public final int hashCode() {
        List list = this.f17321d;
        return Arrays.hashCode(new Object[]{list == null ? null : new HashSet(list)});
    }

    @Override // android.os.Parcelable
    public final void writeToParcel(Parcel parcel, int i5) {
        int I = ys.l.I(20293, parcel);
        ys.l.G(parcel, 1, this.f17321d);
        ys.l.J(I, parcel);
    }
}
