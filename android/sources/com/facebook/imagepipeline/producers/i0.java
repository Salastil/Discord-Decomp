package com.facebook.imagepipeline.producers;

import android.content.res.AssetFileDescriptor;
import android.content.res.AssetManager;
import android.content.res.Resources;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.request.ImageRequest;
import java.io.IOException;
import java.io.InputStream;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i0 extends o0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f4751c = 0;

    /* renamed from: d, reason: collision with root package name */
    public final Object f4752d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i0(Executor executor, e4.c pooledByteBufferFactory, AssetManager assetManager) {
        super(executor, pooledByteBufferFactory);
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
        Intrinsics.checkNotNullParameter(assetManager, "assetManager");
        this.f4752d = assetManager;
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final EncodedImage d(ImageRequest imageRequest) {
        int i5;
        int i6;
        switch (this.f4751c) {
            case 0:
                Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
                AssetManager assetManager = (AssetManager) this.f4752d;
                String path = imageRequest.getSourceUri().getPath();
                Intrinsics.checkNotNull(path);
                String substring = path.substring(1);
                Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                InputStream open = assetManager.open(substring, 2);
                AssetFileDescriptor assetFileDescriptor = null;
                try {
                    String path2 = imageRequest.getSourceUri().getPath();
                    Intrinsics.checkNotNull(path2);
                    String substring2 = path2.substring(1);
                    Intrinsics.checkNotNullExpressionValue(substring2, "substring(...)");
                    assetFileDescriptor = assetManager.openFd(substring2);
                    i5 = (int) assetFileDescriptor.getLength();
                    try {
                        assetFileDescriptor.close();
                    } catch (IOException unused) {
                    }
                } catch (IOException unused2) {
                    if (assetFileDescriptor != null) {
                        try {
                            assetFileDescriptor.close();
                        } catch (IOException unused3) {
                        }
                    }
                    i5 = -1;
                } catch (Throwable th2) {
                    if (assetFileDescriptor != null) {
                        try {
                            assetFileDescriptor.close();
                        } catch (IOException unused4) {
                        }
                    }
                    throw th2;
                }
                return c(open, i5);
            default:
                Intrinsics.checkNotNullParameter(imageRequest, "imageRequest");
                Resources resources = (Resources) this.f4752d;
                InputStream openRawResource = resources.openRawResource(io.sentry.hints.j.A(imageRequest));
                AssetFileDescriptor assetFileDescriptor2 = null;
                try {
                    assetFileDescriptor2 = resources.openRawResourceFd(io.sentry.hints.j.A(imageRequest));
                    i6 = (int) assetFileDescriptor2.getLength();
                    try {
                        assetFileDescriptor2.close();
                    } catch (IOException unused5) {
                    }
                } catch (Resources.NotFoundException unused6) {
                    if (assetFileDescriptor2 != null) {
                        try {
                            assetFileDescriptor2.close();
                        } catch (IOException unused7) {
                        }
                    }
                    i6 = -1;
                } catch (Throwable th3) {
                    if (assetFileDescriptor2 != null) {
                        try {
                            assetFileDescriptor2.close();
                        } catch (IOException unused8) {
                        }
                    }
                    throw th3;
                }
                return c(openRawResource, i6);
        }
    }

    @Override // com.facebook.imagepipeline.producers.o0
    public final String e() {
        switch (this.f4751c) {
            case 0:
                return "LocalAssetFetchProducer";
            default:
                return "LocalResourceFetchProducer";
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i0(Executor executor, e4.c pooledByteBufferFactory, Resources resources) {
        super(executor, pooledByteBufferFactory);
        Intrinsics.checkNotNullParameter(executor, "executor");
        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
        Intrinsics.checkNotNullParameter(resources, "resources");
        this.f4752d = resources;
    }
}
