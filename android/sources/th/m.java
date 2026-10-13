package th;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Parcelable;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

/* loaded from: classes3.dex */
public final class m implements u1 {

    /* renamed from: g, reason: collision with root package name */
    public static final a5.m f18502g = new a5.m("AssetPackServiceImpl", 3);

    /* renamed from: h, reason: collision with root package name */
    public static final Intent f18503h = new Intent("com.google.android.play.core.assetmoduleservice.BIND_ASSET_MODULE_SERVICE").setPackage("com.android.vending");
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final p0 f18504b;

    /* renamed from: c, reason: collision with root package name */
    public final g1 f18505c;

    /* renamed from: d, reason: collision with root package name */
    public final uh.q f18506d;

    /* renamed from: e, reason: collision with root package name */
    public final uh.q f18507e;

    /* renamed from: f, reason: collision with root package name */
    public final AtomicBoolean f18508f = new AtomicBoolean();

    public m(Context context, p0 p0Var, g1 g1Var) {
        this.a = context.getPackageName();
        this.f18504b = p0Var;
        this.f18505c = g1Var;
        boolean a = uh.c.a(context);
        a5.m mVar = f18502g;
        if (a) {
            Context applicationContext = context.getApplicationContext();
            applicationContext = applicationContext == null ? context : applicationContext;
            Intent intent = f18503h;
            this.f18506d = new uh.q(applicationContext, mVar, "AssetPackService", intent);
            Context applicationContext2 = context.getApplicationContext();
            this.f18507e = new uh.q(applicationContext2 != null ? applicationContext2 : context, mVar, "AssetPackService-keepAlive", intent);
        }
        mVar.a("AssetPackService initiated.", new Object[0]);
    }

    public static Bundle h() {
        Bundle bundle = new Bundle();
        bundle.putInt("playcore_version_code", 20300);
        ArrayList<Integer> arrayList = new ArrayList<>();
        arrayList.add(0);
        arrayList.add(1);
        bundle.putIntegerArrayList("supported_compression_formats", arrayList);
        ArrayList<Integer> arrayList2 = new ArrayList<>();
        arrayList2.add(1);
        arrayList2.add(2);
        bundle.putIntegerArrayList("supported_patch_formats", arrayList2);
        return bundle;
    }

    public static jg.l i() {
        f18502g.b("onError(%d)", -11);
        return a5.k0.r(new qh.a(-11, 1));
    }

    public static /* bridge */ /* synthetic */ Bundle k(HashMap hashMap) {
        Bundle h6 = h();
        ArrayList<? extends Parcelable> arrayList = new ArrayList<>();
        for (Map.Entry entry : hashMap.entrySet()) {
            Bundle bundle = new Bundle();
            bundle.putString("installed_asset_module_name", (String) entry.getKey());
            bundle.putLong("installed_asset_module_version", ((Long) entry.getValue()).longValue());
            arrayList.add(bundle);
        }
        h6.putParcelableArrayList("installed_asset_module", arrayList);
        return h6;
    }

    public static /* bridge */ /* synthetic */ ArrayList l(Collection collection) {
        ArrayList arrayList = new ArrayList(collection.size());
        Iterator it = collection.iterator();
        while (it.hasNext()) {
            String str = (String) it.next();
            Bundle bundle = new Bundle();
            bundle.putString("module_name", str);
            arrayList.add(bundle);
        }
        return arrayList;
    }

    @Override // th.u1
    public final jg.l a(ArrayList arrayList, HashMap hashMap) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            return i();
        }
        f18502g.e("startDownload(%s)", arrayList);
        jg.g gVar = new jg.g();
        qVar.c(new b(this, gVar, arrayList, hashMap, gVar), gVar);
        rj.b bVar = new rj.b(this);
        jg.l lVar = gVar.a;
        lVar.e(bVar);
        return lVar;
    }

    @Override // th.u1
    public final void b(int i5) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            throw new l0("The Play Store app is not installed or is an unofficial version.", i5);
        }
        f18502g.e("notifySessionFailed", new Object[0]);
        jg.g gVar = new jg.g();
        qVar.c(new f(this, gVar, i5, gVar), gVar);
    }

    @Override // th.u1
    public final void c(int i5, String str) {
        j(i5, 10, str);
    }

    @Override // th.u1
    public final void d(int i5, int i6, String str, String str2) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            throw new l0("The Play Store app is not installed or is an unofficial version.", i5);
        }
        f18502g.e("notifyChunkTransferred", new Object[0]);
        jg.g gVar = new jg.g();
        qVar.c(new d(this, gVar, i5, str, str2, i6, gVar, 0), gVar);
    }

    @Override // th.u1
    public final void e(List list) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            return;
        }
        f18502g.e("cancelDownloads(%s)", list);
        jg.g gVar = new jg.g();
        qVar.c(new c(this, gVar, list, gVar, 0), gVar);
    }

    @Override // th.u1
    public final jg.l f(int i5, int i6, String str, String str2) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            return i();
        }
        f18502g.e("getChunkFileDescriptor(%s, %s, %d, session=%d)", str, str2, Integer.valueOf(i6), Integer.valueOf(i5));
        jg.g gVar = new jg.g();
        qVar.c(new d(this, gVar, i5, str, str2, i6, gVar, 1), gVar);
        return gVar.a;
    }

    @Override // th.u1
    public final jg.l g(HashMap hashMap) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            return i();
        }
        f18502g.e("syncPacks", new Object[0]);
        jg.g gVar = new jg.g();
        qVar.c(new c(this, gVar, hashMap, gVar, 1), gVar);
        return gVar.a;
    }

    public final void j(int i5, int i6, String str) {
        uh.q qVar = this.f18506d;
        if (qVar == null) {
            throw new l0("The Play Store app is not installed or is an unofficial version.", i5);
        }
        f18502g.e("notifyModuleCompleted", new Object[0]);
        jg.g gVar = new jg.g();
        qVar.c(new e(this, gVar, i5, str, gVar, i6), gVar);
    }

    @Override // th.u1
    public final synchronized void f() {
        if (this.f18507e == null) {
            f18502g.g("Keep alive connection manager is not initialized.", new Object[0]);
            return;
        }
        a5.m mVar = f18502g;
        mVar.e("keepAlive", new Object[0]);
        if (!this.f18508f.compareAndSet(false, true)) {
            mVar.e("Service is already kept alive.", new Object[0]);
        } else {
            jg.g gVar = new jg.g();
            this.f18507e.c(new g(this, gVar, gVar), gVar);
        }
    }
}
