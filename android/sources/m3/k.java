package m3;

import android.graphics.Rect;
import android.os.Build;
import android.util.Log;
import android.view.View;
import android.view.ViewGroup;
import android.view.animation.AnimationUtils;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.u1;
import androidx.transition.Transition;
import com.discord.R;
import java.util.ArrayList;

/* loaded from: classes.dex */
public class k extends u1 {
    @Override // androidx.fragment.app.u1
    public final void a(View view, Object obj) {
        ((Transition) obj).b(view);
    }

    @Override // androidx.fragment.app.u1
    public final void b(Object obj, ArrayList arrayList) {
        Transition transition = (Transition) obj;
        if (transition == null) {
            return;
        }
        int i5 = 0;
        if (transition instanceof z) {
            z zVar = (z) transition;
            int size = zVar.f14395d0.size();
            while (i5 < size) {
                b(zVar.R(i5), arrayList);
                i5++;
            }
            return;
        }
        if (u1.k(transition.f2541w) && u1.k(transition.f2542x)) {
            int size2 = arrayList.size();
            while (i5 < size2) {
                transition.b((View) arrayList.get(i5));
                i5++;
            }
        }
    }

    @Override // androidx.fragment.app.u1
    public final void c(Object obj) {
        ((r) obj).a();
    }

    @Override // androidx.fragment.app.u1
    public final void d(Object obj, androidx.fragment.app.d dVar) {
        r rVar = (r) obj;
        rVar.f14383g = dVar;
        if (!rVar.f14378b) {
            rVar.f14380d = 2;
        } else {
            rVar.b();
            rVar.f14381e.a(0.0f);
        }
    }

    @Override // androidx.fragment.app.u1
    public final void e(ViewGroup viewGroup, Object obj) {
        x.a(viewGroup, (Transition) obj);
    }

    @Override // androidx.fragment.app.u1
    public final boolean g(Object obj) {
        return obj instanceof Transition;
    }

    @Override // androidx.fragment.app.u1
    public final Object h(Object obj) {
        if (obj != null) {
            return ((Transition) obj).clone();
        }
        return null;
    }

    @Override // androidx.fragment.app.u1
    public final Object i(ViewGroup viewGroup, Object obj) {
        Transition transition = (Transition) obj;
        ArrayList arrayList = x.f14393c;
        if (arrayList.contains(viewGroup) || !viewGroup.isLaidOut() || Build.VERSION.SDK_INT < 34) {
            return null;
        }
        if (!transition.v()) {
            throw new IllegalArgumentException("The Transition must support seeking.");
        }
        arrayList.add(viewGroup);
        Transition clone = transition.clone();
        z zVar = new z();
        zVar.Q(clone);
        x.c(viewGroup, zVar);
        viewGroup.setTag(R.id.transition_current_scene, null);
        w wVar = new w();
        wVar.f14390d = zVar;
        wVar.f14391e = viewGroup;
        viewGroup.addOnAttachStateChangeListener(wVar);
        viewGroup.getViewTreeObserver().addOnPreDrawListener(wVar);
        viewGroup.invalidate();
        r rVar = new r(zVar);
        zVar.X = rVar;
        zVar.a(rVar);
        return zVar.X;
    }

    @Override // androidx.fragment.app.u1
    public final boolean l() {
        return true;
    }

    @Override // androidx.fragment.app.u1
    public final boolean m(Object obj) {
        boolean v5 = ((Transition) obj).v();
        if (!v5) {
            Log.v("FragmentManager", "Predictive back not available for AndroidX Transition " + obj + ". Please enable seeking support for the designated transition by overriding isSeekingSupported().");
        }
        return v5;
    }

    @Override // androidx.fragment.app.u1
    public final Object n(Object obj, Object obj2, Object obj3) {
        Transition transition = (Transition) obj;
        Transition transition2 = (Transition) obj2;
        Transition transition3 = (Transition) obj3;
        if (transition != null && transition2 != null) {
            z zVar = new z();
            zVar.Q(transition);
            zVar.Q(transition2);
            zVar.U(1);
            transition = zVar;
        } else if (transition == null) {
            transition = transition2 != null ? transition2 : null;
        }
        if (transition3 == null) {
            return transition;
        }
        z zVar2 = new z();
        if (transition != null) {
            zVar2.Q(transition);
        }
        zVar2.Q(transition3);
        return zVar2;
    }

    @Override // androidx.fragment.app.u1
    public final Object o(Object obj, Object obj2) {
        z zVar = new z();
        if (obj != null) {
            zVar.Q((Transition) obj);
        }
        zVar.Q((Transition) obj2);
        return zVar;
    }

    @Override // androidx.fragment.app.u1
    public final void p(Object obj, View view, ArrayList arrayList) {
        ((Transition) obj).a(new h(view, arrayList));
    }

    @Override // androidx.fragment.app.u1
    public final void q(Object obj, Object obj2, ArrayList arrayList, Object obj3, ArrayList arrayList2) {
        ((Transition) obj).a(new i(this, obj2, arrayList, obj3, arrayList2));
    }

    @Override // androidx.fragment.app.u1
    public final void r(Object obj, float f2) {
        r rVar = (r) obj;
        boolean z5 = rVar.f14378b;
        if (z5) {
            z zVar = rVar.f14384h;
            long j = zVar.W;
            long j5 = (long) (f2 * j);
            if (j5 == 0) {
                j5 = 1;
            }
            if (j5 == j) {
                j5 = j - 1;
            }
            if (rVar.f14381e != null) {
                throw new IllegalStateException("setCurrentPlayTimeMillis() called after animation has been started");
            }
            long j7 = rVar.a;
            if (j5 == j7 || !z5) {
                return;
            }
            if (!rVar.f14379c) {
                if (j5 == 0 && j7 > 0) {
                    j5 = -1;
                } else if (j5 == j && j7 < j) {
                    j5 = j + 1;
                }
                if (j5 != j7) {
                    zVar.H(j5, j7);
                    rVar.a = j5;
                }
            }
            a1.d dVar = rVar.f14382f;
            long currentAnimationTimeMillis = AnimationUtils.currentAnimationTimeMillis();
            int i5 = (dVar.f14e + 1) % 20;
            dVar.f14e = i5;
            ((long[]) dVar.f15i)[i5] = currentAnimationTimeMillis;
            ((float[]) dVar.f16v)[i5] = j5;
        }
    }

    @Override // androidx.fragment.app.u1
    public final void s(View view, Object obj) {
        if (view != null) {
            Rect rect = new Rect();
            u1.j(view, rect);
            ((Transition) obj).J(new g(0, rect));
        }
    }

    @Override // androidx.fragment.app.u1
    public final void t(Object obj, Rect rect) {
        ((Transition) obj).J(new g(1, rect));
    }

    @Override // androidx.fragment.app.u1
    public final void u(Fragment fragment, Object obj, f1.b bVar, Runnable runnable) {
        v(obj, bVar, null, runnable);
    }

    @Override // androidx.fragment.app.u1
    public final void v(Object obj, f1.b bVar, androidx.fragment.app.y yVar, Runnable runnable) {
        Transition transition = (Transition) obj;
        bc.a aVar = new bc.a(yVar, transition, runnable, 11);
        synchronized (bVar) {
            while (bVar.f8307c) {
                try {
                    try {
                        bVar.wait();
                    } catch (InterruptedException unused) {
                    }
                } finally {
                }
            }
            if (bVar.f8306b != aVar) {
                bVar.f8306b = aVar;
                if (bVar.a) {
                    Runnable runnable2 = (Runnable) aVar.f2769e;
                    Transition transition2 = (Transition) aVar.f2770i;
                    Runnable runnable3 = (Runnable) aVar.f2771v;
                    if (runnable2 == null) {
                        transition2.cancel();
                        runnable3.run();
                    } else {
                        runnable2.run();
                    }
                }
            }
        }
        transition.a(new j(runnable));
    }

    @Override // androidx.fragment.app.u1
    public final void w(Object obj, View view, ArrayList arrayList) {
        z zVar = (z) obj;
        ArrayList arrayList2 = zVar.f2542x;
        arrayList2.clear();
        int size = arrayList.size();
        for (int i5 = 0; i5 < size; i5++) {
            u1.f((View) arrayList.get(i5), arrayList2);
        }
        arrayList2.add(view);
        arrayList.add(view);
        b(zVar, arrayList);
    }

    @Override // androidx.fragment.app.u1
    public final void x(Object obj, ArrayList arrayList, ArrayList arrayList2) {
        z zVar = (z) obj;
        if (zVar != null) {
            ArrayList arrayList3 = zVar.f2542x;
            arrayList3.clear();
            arrayList3.addAll(arrayList2);
            z(zVar, arrayList, arrayList2);
        }
    }

    @Override // androidx.fragment.app.u1
    public final Object y(Object obj) {
        if (obj == null) {
            return null;
        }
        z zVar = new z();
        zVar.Q((Transition) obj);
        return zVar;
    }

    public final void z(Object obj, ArrayList arrayList, ArrayList arrayList2) {
        Transition transition = (Transition) obj;
        int i5 = 0;
        if (transition instanceof z) {
            z zVar = (z) transition;
            int size = zVar.f14395d0.size();
            while (i5 < size) {
                z(zVar.R(i5), arrayList, arrayList2);
                i5++;
            }
            return;
        }
        if (u1.k(transition.f2541w)) {
            ArrayList arrayList3 = transition.f2542x;
            if (arrayList3.size() == arrayList.size() && arrayList3.containsAll(arrayList)) {
                int size2 = arrayList2 == null ? 0 : arrayList2.size();
                while (i5 < size2) {
                    transition.b((View) arrayList2.get(i5));
                    i5++;
                }
                for (int size3 = arrayList.size() - 1; size3 >= 0; size3--) {
                    transition.E((View) arrayList.get(size3));
                }
            }
        }
    }
}
