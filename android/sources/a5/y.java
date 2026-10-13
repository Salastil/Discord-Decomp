package a5;

import androidx.collection.SimpleArrayMap;
import androidx.core.util.Consumer;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.QueryProductDetailsResult;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final /* synthetic */ class y implements Consumer {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f237b;

    public /* synthetic */ y(int i5, Object obj) {
        this.a = i5;
        this.f237b = obj;
    }

    @Override // androidx.core.util.Consumer
    public final void accept(Object obj) {
        switch (this.a) {
            case 0:
                QueryProductDetailsResult queryProductDetailsResult = new QueryProductDetailsResult(new ArrayList(), new ArrayList());
                ((k) this.f237b).a((BillingResult) obj, queryProductDetailsResult);
                return;
            case 1:
                i1.e eVar = (i1.e) obj;
                if (eVar == null) {
                    eVar = new i1.e(-3);
                }
                ((e4.e) this.f237b).y(eVar);
                return;
            default:
                i1.e eVar2 = (i1.e) obj;
                synchronized (i1.f.f10451c) {
                    try {
                        SimpleArrayMap simpleArrayMap = i1.f.f10452d;
                        ArrayList arrayList = (ArrayList) simpleArrayMap.get((String) this.f237b);
                        if (arrayList == null) {
                            return;
                        }
                        simpleArrayMap.remove((String) this.f237b);
                        for (int i5 = 0; i5 < arrayList.size(); i5++) {
                            ((Consumer) arrayList.get(i5)).accept(eVar2);
                        }
                        return;
                    } finally {
                    }
                }
        }
    }
}
