package com.facebook.imagepipeline.producers;

import android.util.Pair;
import com.facebook.imagepipeline.image.EncodedImage;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class r0 extends f {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f4802b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f4803c;

    public /* synthetic */ r0(int i5, Object obj, Object obj2) {
        this.a = i5;
        this.f4803c = obj;
        this.f4802b = obj2;
    }

    @Override // com.facebook.imagepipeline.producers.f
    public final void a() {
        boolean remove;
        ArrayList arrayList;
        e eVar;
        ArrayList arrayList2;
        ArrayList arrayList3;
        EncodedImage encodedImage;
        switch (this.a) {
            case 0:
                synchronized (((t0) this.f4803c)) {
                    try {
                        remove = ((t0) this.f4803c).f4809b.remove((Pair) this.f4802b);
                        arrayList = null;
                        if (!remove) {
                            eVar = null;
                            arrayList2 = null;
                        } else if (((t0) this.f4803c).f4809b.isEmpty()) {
                            eVar = ((t0) this.f4803c).f4813f;
                            arrayList2 = null;
                        } else {
                            ArrayList k = ((t0) this.f4803c).k();
                            arrayList2 = ((t0) this.f4803c).l();
                            arrayList3 = ((t0) this.f4803c).j();
                            eVar = null;
                            arrayList = k;
                        }
                        arrayList3 = arrayList2;
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                e.b(arrayList);
                e.d(arrayList2);
                e.a(arrayList3);
                if (eVar != null) {
                    eVar.e();
                }
                if (remove) {
                    ((Consumer) ((Pair) this.f4802b).first).a();
                    return;
                }
                return;
            case 1:
                b1 b1Var = (b1) this.f4803c;
                h0 h0Var = b1Var.f4705g;
                synchronized (h0Var) {
                    encodedImage = h0Var.f4740e;
                    h0Var.f4740e = null;
                    h0Var.f4741f = 0;
                }
                EncodedImage.closeSafely(encodedImage);
                b1Var.f4704f = true;
                ((Consumer) this.f4802b).a();
                return;
            default:
                n0 runnable = (n0) this.f4802b;
                runnable.a();
                g1 g1Var = (g1) ((f1) this.f4803c).f4734c;
                synchronized (g1Var) {
                    Intrinsics.checkNotNullParameter(runnable, "runnable");
                    g1Var.f4735b.remove(runnable);
                }
                return;
        }
    }

    @Override // com.facebook.imagepipeline.producers.f
    public void b() {
        switch (this.a) {
            case 0:
                e.a(((t0) this.f4803c).j());
                break;
            case 1:
                b1 b1Var = (b1) this.f4803c;
                if (b1Var.f4703e.P()) {
                    b1Var.f4705g.c();
                    break;
                }
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.f
    public void c() {
        switch (this.a) {
            case 0:
                e.b(((t0) this.f4803c).k());
                break;
        }
    }

    @Override // com.facebook.imagepipeline.producers.f
    public void d() {
        switch (this.a) {
            case 0:
                e.d(((t0) this.f4803c).l());
                break;
        }
    }

    public r0(n0 n0Var, f1 f1Var) {
        this.a = 2;
        this.f4802b = n0Var;
        this.f4803c = f1Var;
    }
}
