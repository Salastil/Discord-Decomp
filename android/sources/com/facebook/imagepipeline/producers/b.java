package com.facebook.imagepipeline.producers;

import com.facebook.imagepipeline.common.ResizeOptions;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements z0 {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final Object f4699b;

    public /* synthetic */ b(z0 z0Var, int i5) {
        this.a = i5;
        this.f4699b = z0Var;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext context) {
        switch (this.a) {
            case 0:
                ((z0) this.f4699b).b(new a(consumer, 0), context);
                break;
            case 1:
                Intrinsics.checkNotNullParameter(consumer, "consumer");
                Intrinsics.checkNotNullParameter(context, "context");
                z0 z0Var = (z0) this.f4699b;
                Intrinsics.checkNotNullParameter(consumer, "consumer");
                z0Var.b(new a(consumer, 2), context);
                break;
            case 2:
                ((z0) this.f4699b).b(new a(consumer, 3), context);
                break;
            default:
                if (context.g().getResizeOptions() != null) {
                    if (!c(0, consumer, context)) {
                        consumer.b(1, null);
                        break;
                    }
                } else {
                    consumer.b(1, null);
                    break;
                }
                break;
        }
    }

    public boolean c(int i5, Consumer consumer, ProducerContext producerContext) {
        l1[] l1VarArr = (l1[]) this.f4699b;
        ResizeOptions resizeOptions = producerContext.g().getResizeOptions();
        while (true) {
            if (i5 >= l1VarArr.length) {
                i5 = -1;
                break;
            }
            if (l1VarArr[i5].a(resizeOptions)) {
                break;
            }
            i5++;
        }
        if (i5 == -1) {
            return false;
        }
        l1VarArr[i5].b(new k1(this, consumer, producerContext, i5), producerContext);
        return true;
    }

    public b(z0 inputProducer) {
        this.a = 1;
        Intrinsics.checkNotNullParameter(inputProducer, "inputProducer");
        this.f4699b = inputProducer;
    }

    public b(l1[] l1VarArr) {
        this.a = 3;
        l1[] l1VarArr2 = l1VarArr;
        this.f4699b = l1VarArr2;
        int length = l1VarArr2.length;
        if (length <= 0) {
            if (length >= 0) {
                throw new IndexOutOfBoundsException(o8.h.g("%s (%s) must be less than size (%s)", "index", 0, Integer.valueOf(length)));
            }
            throw new IllegalArgumentException(k0.d.i(length, "negative size: "));
        }
    }
}
