package com.facebook.imagepipeline.platform;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.os.MemoryFile;
import androidx.recyclerview.widget.RecyclerView;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder;
import com.facebook.webpsupport.WebpBitmapFactoryImpl;
import java.io.FileDescriptor;
import java.io.IOException;
import java.io.OutputStream;
import java.lang.reflect.Method;
import o8.c;
import o8.h;
import qa.q;
import r8.f;
import x8.a;

@c
/* loaded from: classes3.dex */
public class GingerbreadPurgeableDecoder extends DalvikPurgeableDecoder {

    /* renamed from: d, reason: collision with root package name */
    public static Method f4687d;

    /* renamed from: c, reason: collision with root package name */
    public final WebpBitmapFactoryImpl f4688c;

    @c
    public GingerbreadPurgeableDecoder() {
        WebpBitmapFactoryImpl webpBitmapFactoryImpl = null;
        if (!a.a) {
            try {
                webpBitmapFactoryImpl = (WebpBitmapFactoryImpl) WebpBitmapFactoryImpl.class.newInstance();
            } catch (Throwable unused) {
            }
            a.a = true;
        }
        this.f4688c = webpBitmapFactoryImpl;
    }

    public static MemoryFile g(CloseableReference closeableReference, int i5, byte[] bArr) {
        OutputStream outputStream;
        u8.a aVar;
        f fVar = null;
        OutputStream outputStream2 = null;
        MemoryFile memoryFile = new MemoryFile(null, (bArr == null ? 0 : bArr.length) + i5);
        memoryFile.allowPurging(false);
        try {
            f fVar2 = new f((q) closeableReference.q());
            try {
                aVar = new u8.a(fVar2, i5);
                try {
                    outputStream2 = memoryFile.getOutputStream();
                    outputStream2.getClass();
                    byte[] bArr2 = new byte[RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT];
                    while (true) {
                        int read = aVar.read(bArr2);
                        if (read == -1) {
                            break;
                        }
                        outputStream2.write(bArr2, 0, read);
                    }
                    if (bArr != null) {
                        memoryFile.writeBytes(bArr, 0, i5, bArr.length);
                    }
                    closeableReference.close();
                    o8.a.b(fVar2);
                    o8.a.b(aVar);
                    o8.a.a(outputStream2);
                    return memoryFile;
                } catch (Throwable th2) {
                    th = th2;
                    outputStream = outputStream2;
                    fVar = fVar2;
                    closeableReference.close();
                    o8.a.b(fVar);
                    o8.a.b(aVar);
                    o8.a.a(outputStream);
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
                outputStream = null;
                aVar = null;
            }
        } catch (Throwable th4) {
            th = th4;
            outputStream = null;
            aVar = null;
        }
    }

    @Override // com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder
    public final Bitmap c(CloseableReference closeableReference, BitmapFactory.Options options) {
        return h(closeableReference, ((q) closeableReference.q()).o(), null, options);
    }

    @Override // com.facebook.imagepipeline.nativecode.DalvikPurgeableDecoder
    public final Bitmap d(CloseableReference closeableReference, int i5, BitmapFactory.Options options) {
        return h(closeableReference, i5, DalvikPurgeableDecoder.e(i5, closeableReference) ? null : DalvikPurgeableDecoder.f4670b, options);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:20:0x0031  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Bitmap h(CloseableReference closeableReference, int i5, byte[] bArr, BitmapFactory.Options options) {
        MemoryFile memoryFile = 0;
        try {
            try {
                MemoryFile g6 = g(closeableReference, i5, bArr);
                try {
                    FileDescriptor i6 = i(g6);
                    if (this.f4688c == null) {
                        throw new IllegalStateException("WebpBitmapFactory is null");
                    }
                    Bitmap hookDecodeFileDescriptor = WebpBitmapFactoryImpl.hookDecodeFileDescriptor(i6, null, options);
                    h.d(hookDecodeFileDescriptor, "BitmapFactory returned null");
                    g6.close();
                    return hookDecodeFileDescriptor;
                } catch (IOException e9) {
                    e = e9;
                    h.h(e);
                    throw null;
                }
            } catch (Throwable th2) {
                th = th2;
                memoryFile = closeableReference;
                if (memoryFile != 0) {
                    memoryFile.close();
                }
                throw th;
            }
        } catch (IOException e10) {
            e = e10;
        } catch (Throwable th3) {
            th = th3;
            if (memoryFile != 0) {
            }
            throw th;
        }
    }

    public final FileDescriptor i(MemoryFile memoryFile) {
        Method method;
        try {
            synchronized (this) {
                if (f4687d == null) {
                    try {
                        f4687d = MemoryFile.class.getDeclaredMethod("getFileDescriptor", null);
                    } catch (Exception e9) {
                        h.h(e9);
                        throw null;
                    }
                }
                method = f4687d;
            }
            Object invoke = method.invoke(memoryFile, null);
            invoke.getClass();
            return (FileDescriptor) invoke;
        } catch (Exception e10) {
            h.h(e10);
            throw null;
        }
    }
}
