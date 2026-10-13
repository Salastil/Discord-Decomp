package th;

import android.os.Bundle;
import com.google.android.play.core.assetpacks.AssetPackState;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public final class j extends h {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f18478i;
    public final /* synthetic */ m j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ j(m mVar, jg.g gVar, int i5) {
        super(mVar, gVar);
        this.f18478i = i5;
        this.j = mVar;
    }

    @Override // th.h, uh.l
    public void c(Bundle bundle, Bundle bundle2) {
        switch (this.f18478i) {
            case 1:
                super.c(bundle, bundle2);
                m mVar = this.j;
                if (!mVar.f18508f.compareAndSet(true, false)) {
                    m.f18502g.g("Expected keepingAlive to be true, but was false.", new Object[0]);
                }
                if (bundle.getBoolean("keep_alive")) {
                    mVar.f();
                    break;
                }
                break;
            default:
                super.c(bundle, bundle2);
                break;
        }
    }

    @Override // th.h, uh.l
    public void e(List list) {
        switch (this.f18478i) {
            case 0:
                super.e(list);
                ArrayList arrayList = new ArrayList();
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    Bundle bundle = (Bundle) it.next();
                    m mVar = this.j;
                    AssetPackState assetPackState = (AssetPackState) x.a(bundle, mVar.f18504b, mVar.f18505c).f18615b.values().iterator().next();
                    if (assetPackState == null) {
                        m.f18502g.b("onGetSessionStates: Bundle contained no pack.", new Object[0]);
                    }
                    int h6 = assetPackState.h();
                    if (h6 == 1 || h6 == 7 || h6 == 2 || h6 == 9 || h6 == 3) {
                        arrayList.add(assetPackState.g());
                    }
                }
                this.f18461g.d(arrayList);
                break;
            default:
                super.e(list);
                break;
        }
    }

    @Override // th.h, uh.l
    public void n(Bundle bundle) {
        switch (this.f18478i) {
            case 1:
                uh.q qVar = this.j.f18507e;
                jg.g gVar = this.f18461g;
                qVar.d(gVar);
                int i5 = bundle.getInt("error_code");
                m.f18502g.b("onError(%d)", Integer.valueOf(i5));
                gVar.c(new qh.a(i5, 1));
                break;
            default:
                super.n(bundle);
                break;
        }
    }
}
