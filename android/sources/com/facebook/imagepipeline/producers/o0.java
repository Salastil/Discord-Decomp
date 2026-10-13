package com.facebook.imagepipeline.producers;

import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.InputStream;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class o0 implements z0 {
    public final Executor a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.c f4781b;

    public o0(Executor executor, e4.c cVar) {
        this.a = executor;
        this.f4781b = cVar;
    }

    @Override // com.facebook.imagepipeline.producers.z0
    public final void b(Consumer consumer, ProducerContext producerContext) {
        a1 C = producerContext.C();
        ImageRequest g6 = producerContext.g();
        producerContext.o("local", "fetch");
        n0 n0Var = new n0(this, consumer, C, producerContext, e(), g6, C, producerContext);
        producerContext.i(new o(3, n0Var));
        this.a.execute(n0Var);
    }

    public final EncodedImage c(InputStream inputStream, int i5) {
        qa.r outputStream;
        s8.b A;
        e4.c cVar = this.f4781b;
        try {
            if (i5 > 0) {
                cVar.getClass();
                Intrinsics.checkNotNullParameter(inputStream, "inputStream");
                outputStream = new qa.r((qa.p) cVar.f7939e, i5);
                try {
                    Intrinsics.checkNotNullParameter(inputStream, "inputStream");
                    Intrinsics.checkNotNullParameter(outputStream, "outputStream");
                    ((a5.a0) cVar.f7940i).m(inputStream, outputStream);
                    qa.q f2 = outputStream.f();
                    outputStream.close();
                    A = CloseableReference.A(f2);
                    s8.b bVar = A;
                    EncodedImage encodedImage = new EncodedImage(bVar);
                    o8.a.b(inputStream);
                    CloseableReference.l(bVar);
                    return encodedImage;
                } finally {
                }
            }
            cVar.getClass();
            Intrinsics.checkNotNullParameter(inputStream, "inputStream");
            qa.p pVar = (qa.p) cVar.f7939e;
            outputStream = new qa.r(pVar, pVar.G[0]);
            try {
                Intrinsics.checkNotNullParameter(inputStream, "inputStream");
                Intrinsics.checkNotNullParameter(outputStream, "outputStream");
                ((a5.a0) cVar.f7940i).m(inputStream, outputStream);
                qa.q f10 = outputStream.f();
                outputStream.close();
                A = CloseableReference.A(f10);
                s8.b bVar2 = A;
                EncodedImage encodedImage2 = new EncodedImage(bVar2);
                o8.a.b(inputStream);
                CloseableReference.l(bVar2);
                return encodedImage2;
            } finally {
            }
        } catch (Throwable th2) {
            o8.a.b(inputStream);
            CloseableReference.l(null);
            throw th2;
        }
    }

    public abstract EncodedImage d(ImageRequest imageRequest);

    public abstract String e();
}
