package io.sentry;

import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityManager;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.TimerTask;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final class o extends TimerTask {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11695d = 1;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f11696e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f11697i;

    public o(q qVar, ArrayList arrayList) {
        this.f11697i = qVar;
        this.f11696e = arrayList;
    }

    @Override // java.util.TimerTask, java.lang.Runnable
    public final void run() {
        switch (this.f11695d) {
            case 0:
                ArrayList arrayList = (ArrayList) this.f11696e;
                long currentTimeMillis = System.currentTimeMillis();
                q qVar = (q) this.f11697i;
                if (currentTimeMillis - qVar.f11918i > 10) {
                    arrayList.clear();
                    qVar.f11918i = currentTimeMillis;
                    a3 a3Var = new a3(qVar.f11916g.getDateProvider().now().d());
                    Iterator it = qVar.f11913d.iterator();
                    while (it.hasNext()) {
                        ((u0) it.next()).a(a3Var);
                    }
                    for (p pVar : qVar.f11912c.values()) {
                        ArrayList arrayList2 = pVar.a;
                        f1 f1Var = pVar.f11705b;
                        arrayList2.add(a3Var);
                        if (f1Var != null) {
                            if (pVar.f11707d.f11916g.getDateProvider().now().d() > TimeUnit.MILLISECONDS.toNanos(30000L) + pVar.f11706c) {
                                arrayList.add(f1Var);
                            }
                        }
                    }
                    Iterator it2 = arrayList.iterator();
                    while (it2.hasNext()) {
                        qVar.f((f1) it2.next());
                    }
                    break;
                }
                break;
            default:
                ((AccessibilityManager) this.f11696e).sendAccessibilityEvent((AccessibilityEvent) this.f11697i);
                break;
        }
    }

    public o(AccessibilityManager accessibilityManager, AccessibilityEvent accessibilityEvent) {
        this.f11696e = accessibilityManager;
        this.f11697i = accessibilityEvent;
    }
}
