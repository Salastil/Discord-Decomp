package af;

import android.content.Intent;
import android.os.Bundle;
import androidx.fragment.app.Fragment;
import java.io.FileDescriptor;
import java.io.PrintWriter;
import java.util.Iterator;
import java.util.Map;
import java.util.WeakHashMap;

/* loaded from: classes3.dex */
public final class j0 extends Fragment implements f {

    /* renamed from: e, reason: collision with root package name */
    public static final WeakHashMap f562e = new WeakHashMap();

    /* renamed from: d, reason: collision with root package name */
    public final a1.d f563d = new a1.d();

    @Override // androidx.fragment.app.Fragment
    public final void dump(String str, FileDescriptor fileDescriptor, PrintWriter printWriter, String[] strArr) {
        super.dump(str, fileDescriptor, printWriter, strArr);
        Iterator it = ((Map) this.f563d.f15i).values().iterator();
        while (it.hasNext()) {
            ((m) it.next()).getClass();
        }
    }

    @Override // af.f
    public final m f() {
        return (m) m.class.cast(((Map) this.f563d.f15i).get("ConnectionlessLifecycleHelper"));
    }

    @Override // af.f
    public final void n(m mVar) {
        this.f563d.A(mVar);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onActivityResult(int i5, int i6, Intent intent) {
        super.onActivityResult(i5, i6, intent);
        this.f563d.C(i5, i6, intent);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        this.f563d.B(bundle);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onDestroy() {
        super.onDestroy();
        a1.d dVar = this.f563d;
        dVar.f14e = 5;
        Iterator it = ((Map) dVar.f15i).values().iterator();
        while (it.hasNext()) {
            ((m) it.next()).getClass();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public final void onResume() {
        super.onResume();
        a1.d dVar = this.f563d;
        dVar.f14e = 3;
        Iterator it = ((Map) dVar.f15i).values().iterator();
        while (it.hasNext()) {
            ((m) it.next()).d();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public final void onSaveInstanceState(Bundle bundle) {
        super.onSaveInstanceState(bundle);
        this.f563d.D(bundle);
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStart() {
        super.onStart();
        a1.d dVar = this.f563d;
        dVar.f14e = 2;
        for (m mVar : ((Map) dVar.f15i).values()) {
            mVar.f571e = true;
            mVar.d();
        }
    }

    @Override // androidx.fragment.app.Fragment
    public final void onStop() {
        super.onStop();
        a1.d dVar = this.f563d;
        dVar.f14e = 4;
        Iterator it = ((Map) dVar.f15i).values().iterator();
        while (it.hasNext()) {
            ((m) it.next()).c();
        }
    }
}
