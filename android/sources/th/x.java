package th;

import android.os.Bundle;
import com.google.android.play.core.assetpacks.AssetPackState;
import java.util.ArrayList;
import java.util.HashMap;

/* loaded from: classes3.dex */
public final class x {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f18615b;

    public x(long j, HashMap hashMap) {
        this.a = j;
        this.f18615b = hashMap;
    }

    public static x a(Bundle bundle, p0 p0Var, g1 g1Var) {
        ha.k kVar = new ha.k(18);
        ArrayList<String> stringArrayList = bundle.getStringArrayList("pack_names");
        HashMap hashMap = new HashMap();
        int size = stringArrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            String str = stringArrayList.get(i5);
            hashMap.put(str, AssetPackState.d(bundle, str, p0Var, g1Var, kVar));
        }
        return new x(bundle.getLong("total_bytes_to_download"), hashMap);
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof x)) {
            return false;
        }
        x xVar = (x) obj;
        return this.a == xVar.a && this.f18615b.equals(xVar.f18615b);
    }

    public final int hashCode() {
        long j = this.a;
        return ((((int) ((j >>> 32) ^ j)) ^ 1000003) * 1000003) ^ this.f18615b.hashCode();
    }

    public final String toString() {
        return "AssetPackStates{totalBytes=" + this.a + ", packStates=" + this.f18615b.toString() + "}";
    }
}
