package e;

import android.os.Bundle;
import androidx.activity.ComponentActivity;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.coroutines.flow.MutableStateFlow;

/* loaded from: classes.dex */
public final /* synthetic */ class c implements d3.d {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f7815b;

    public /* synthetic */ c(int i5, Object obj) {
        this.a = i5;
        this.f7815b = obj;
    }

    @Override // d3.d
    public final Bundle a() {
        Pair[] pairArr;
        switch (this.a) {
            case 0:
                return ComponentActivity.c((ComponentActivity) this.f7815b);
            default:
                p9.c cVar = (p9.c) this.f7815b;
                for (Map.Entry entry : v0.n((LinkedHashMap) cVar.f16326v).entrySet()) {
                    cVar.d(((MutableStateFlow) entry.getValue()).getValue(), (String) entry.getKey());
                }
                for (Map.Entry entry2 : v0.n((LinkedHashMap) cVar.f16324e).entrySet()) {
                    cVar.d(((d3.d) entry2.getValue()).a(), (String) entry2.getKey());
                }
                LinkedHashMap linkedHashMap = (LinkedHashMap) cVar.f16323d;
                if (linkedHashMap.isEmpty()) {
                    pairArr = new Pair[0];
                } else {
                    ArrayList arrayList = new ArrayList(linkedHashMap.size());
                    for (Map.Entry entry3 : linkedHashMap.entrySet()) {
                        arrayList.add(new Pair((String) entry3.getKey(), entry3.getValue()));
                    }
                    pairArr = (Pair[]) arrayList.toArray(new Pair[0]);
                }
                Bundle source = com.facebook.imagepipeline.nativecode.b.c((Pair[]) Arrays.copyOf(pairArr, pairArr.length));
                Intrinsics.checkNotNullParameter(source, "source");
                return source;
        }
    }
}
