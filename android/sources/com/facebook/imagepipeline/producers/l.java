package com.facebook.imagepipeline.producers;

import android.net.Uri;
import android.util.Base64;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.ByteArrayInputStream;
import java.io.FileInputStream;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends o0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4772c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ l(Executor executor, e4.c cVar, int i5) {
        super(executor, cVar);
        this.f4772c = i5;
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final EncodedImage d(ImageRequest imageRequest) {
        boolean equals;
        byte[] bytes;
        switch (this.f4772c) {
            case 0:
                String uri = imageRequest.getSourceUri().toString();
                o8.h.a(Boolean.valueOf(uri.substring(0, 5).equals("data:")));
                int indexOf = uri.indexOf(44);
                String substring = uri.substring(indexOf + 1, uri.length());
                String substring2 = uri.substring(0, indexOf);
                if (substring2.contains(";")) {
                    equals = substring2.split(";")[r5.length - 1].equals("base64");
                } else {
                    equals = false;
                }
                if (equals) {
                    bytes = Base64.decode(substring, 0);
                } else {
                    String decode = Uri.decode(substring);
                    decode.getClass();
                    bytes = decode.getBytes();
                }
                return c(new ByteArrayInputStream(bytes), bytes.length);
            default:
                Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
                return c(new FileInputStream(imageRequest.getSourceFile().toString()), (int) imageRequest.getSourceFile().length());
        }
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final String e() {
        switch (this.f4772c) {
            case 0:
                return "DataFetchProducer";
            default:
                return "LocalFileFetchProducer";
        }
    }
}
