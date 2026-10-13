package oi;

import java.util.concurrent.ExecutorService;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15985d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f15986e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Runnable f15987i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ u4.b f15988v;

    public /* synthetic */ d(e eVar, Runnable runnable, u4.b bVar, int i5) {
        this.f15985d = i5;
        this.f15986e = eVar;
        this.f15987i = runnable;
        this.f15988v = bVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f15985d) {
            case 0:
                ExecutorService executorService = this.f15986e.f15989d;
                final int i5 = 0;
                final Runnable runnable = this.f15987i;
                final u4.b bVar = this.f15988v;
                executorService.execute(new Runnable() { // from class: oi.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i5) {
                            case 0:
                                try {
                                    runnable.run();
                                    return;
                                } catch (Exception e9) {
                                    g gVar = (g) bVar.f18810e;
                                    if (o0.g.f15721x.h(gVar, null, new o0.b(e9))) {
                                        o0.g.e(gVar);
                                    }
                                    throw e9;
                                }
                            case 1:
                                try {
                                    runnable.run();
                                    return;
                                } catch (Exception e10) {
                                    g gVar2 = (g) bVar.f18810e;
                                    if (o0.g.f15721x.h(gVar2, null, new o0.b(e10))) {
                                        o0.g.e(gVar2);
                                        return;
                                    }
                                    return;
                                }
                            default:
                                Runnable runnable2 = runnable;
                                g gVar3 = (g) bVar.f18810e;
                                try {
                                    runnable2.run();
                                    if (o0.g.f15721x.h(gVar3, null, o0.g.f15722y)) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                } catch (Exception e11) {
                                    if (o0.g.f15721x.h(gVar3, null, new o0.b(e11))) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                }
                        }
                    }
                });
                break;
            case 1:
                ExecutorService executorService2 = this.f15986e.f15989d;
                final int i6 = 2;
                final Runnable runnable2 = this.f15987i;
                final u4.b bVar2 = this.f15988v;
                executorService2.execute(new Runnable() { // from class: oi.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i6) {
                            case 0:
                                try {
                                    runnable2.run();
                                    return;
                                } catch (Exception e9) {
                                    g gVar = (g) bVar2.f18810e;
                                    if (o0.g.f15721x.h(gVar, null, new o0.b(e9))) {
                                        o0.g.e(gVar);
                                    }
                                    throw e9;
                                }
                            case 1:
                                try {
                                    runnable2.run();
                                    return;
                                } catch (Exception e10) {
                                    g gVar2 = (g) bVar2.f18810e;
                                    if (o0.g.f15721x.h(gVar2, null, new o0.b(e10))) {
                                        o0.g.e(gVar2);
                                        return;
                                    }
                                    return;
                                }
                            default:
                                Runnable runnable22 = runnable2;
                                g gVar3 = (g) bVar2.f18810e;
                                try {
                                    runnable22.run();
                                    if (o0.g.f15721x.h(gVar3, null, o0.g.f15722y)) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                } catch (Exception e11) {
                                    if (o0.g.f15721x.h(gVar3, null, new o0.b(e11))) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                }
                        }
                    }
                });
                break;
            default:
                ExecutorService executorService3 = this.f15986e.f15989d;
                final int i10 = 1;
                final Runnable runnable3 = this.f15987i;
                final u4.b bVar3 = this.f15988v;
                executorService3.execute(new Runnable() { // from class: oi.b
                    @Override // java.lang.Runnable
                    public final void run() {
                        switch (i10) {
                            case 0:
                                try {
                                    runnable3.run();
                                    return;
                                } catch (Exception e9) {
                                    g gVar = (g) bVar3.f18810e;
                                    if (o0.g.f15721x.h(gVar, null, new o0.b(e9))) {
                                        o0.g.e(gVar);
                                    }
                                    throw e9;
                                }
                            case 1:
                                try {
                                    runnable3.run();
                                    return;
                                } catch (Exception e10) {
                                    g gVar2 = (g) bVar3.f18810e;
                                    if (o0.g.f15721x.h(gVar2, null, new o0.b(e10))) {
                                        o0.g.e(gVar2);
                                        return;
                                    }
                                    return;
                                }
                            default:
                                Runnable runnable22 = runnable3;
                                g gVar3 = (g) bVar3.f18810e;
                                try {
                                    runnable22.run();
                                    if (o0.g.f15721x.h(gVar3, null, o0.g.f15722y)) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                } catch (Exception e11) {
                                    if (o0.g.f15721x.h(gVar3, null, new o0.b(e11))) {
                                        o0.g.e(gVar3);
                                        return;
                                    }
                                    return;
                                }
                        }
                    }
                });
                break;
        }
    }
}
