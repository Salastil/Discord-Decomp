package io.sentry.hints;

import android.media.MediaDrmException;
import android.os.IBinder;
import android.os.IInterface;
import androidx.appcompat.app.ActionBarDrawerToggle$Delegate;
import com.facebook.cache.disk.DiskCacheConfig;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.request.ImageRequest;
import di.d0;
import di.t;
import di.v;
import et.x;
import ie.h0;
import java.io.Closeable;
import java.io.IOException;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import kotlin.collections.u;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.Charsets;
import nc.w;
import nc.y;
import okio.ByteString;
import qc.s;
import th.c0;

/* loaded from: classes3.dex */
public final class j implements t2.b, tm.a, ActionBarDrawerToggle$Delegate, h0, y, o4.b, qc.l, s8.c, uh.g, d0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f11600d;

    public /* synthetic */ j(int i5) {
        this.f11600d = i5;
    }

    public static final int A(ImageRequest imageRequest) {
        String path = imageRequest.getSourceUri().getPath();
        if (path == null) {
            throw new IllegalStateException("Required value was null.");
        }
        String substring = path.substring(1);
        Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
        return Integer.parseInt(substring);
    }

    /* JADX WARN: Code restructure failed: missing block: B:48:0x007f, code lost:
    
        r6 = null;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static ByteString B(String str) {
        int i5;
        char charAt;
        Intrinsics.checkNotNullParameter(str, "<this>");
        byte[] bArr = x.a;
        Intrinsics.checkNotNullParameter(str, "<this>");
        int length = str.length();
        while (length > 0 && ((charAt = str.charAt(length - 1)) == '=' || charAt == '\n' || charAt == '\r' || charAt == ' ' || charAt == '\t')) {
            length--;
        }
        int i6 = (int) ((length * 6) / 8);
        byte[] bArr2 = new byte[i6];
        int i10 = 0;
        int i11 = 0;
        int i12 = 0;
        int i13 = 0;
        while (true) {
            if (i10 < length) {
                char charAt2 = str.charAt(i10);
                if ('A' <= charAt2 && charAt2 < '[') {
                    i5 = charAt2 - 'A';
                } else if ('a' <= charAt2 && charAt2 < '{') {
                    i5 = charAt2 - 'G';
                } else if ('0' <= charAt2 && charAt2 < ':') {
                    i5 = charAt2 + 4;
                } else if (charAt2 == '+' || charAt2 == '-') {
                    i5 = 62;
                } else if (charAt2 == '/' || charAt2 == '_') {
                    i5 = 63;
                } else {
                    if (charAt2 != '\n' && charAt2 != '\r' && charAt2 != ' ' && charAt2 != '\t') {
                        break;
                    }
                    i10++;
                }
                i12 = (i12 << 6) | i5;
                i11++;
                if (i11 % 4 == 0) {
                    bArr2[i13] = (byte) (i12 >> 16);
                    int i14 = i13 + 2;
                    bArr2[i13 + 1] = (byte) (i12 >> 8);
                    i13 += 3;
                    bArr2[i14] = (byte) i12;
                }
                i10++;
            } else {
                int i15 = i11 % 4;
                if (i15 != 1) {
                    if (i15 == 2) {
                        bArr2[i13] = (byte) ((i12 << 12) >> 16);
                        i13++;
                    } else if (i15 == 3) {
                        int i16 = i12 << 6;
                        int i17 = i13 + 1;
                        bArr2[i13] = (byte) (i16 >> 16);
                        i13 += 2;
                        bArr2[i17] = (byte) (i16 >> 8);
                    }
                    if (i13 != i6) {
                        bArr2 = Arrays.copyOf(bArr2, i13);
                        Intrinsics.checkNotNullExpressionValue(bArr2, "copyOf(this, newSize)");
                    }
                }
            }
        }
        if (bArr2 != null) {
            return new ByteString(bArr2);
        }
        return null;
    }

    public static ByteString C(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str.length() % 2 != 0) {
            throw new IllegalArgumentException("Unexpected hex string: ".concat(str).toString());
        }
        int length = str.length() / 2;
        byte[] bArr = new byte[length];
        for (int i5 = 0; i5 < length; i5++) {
            int i6 = i5 * 2;
            bArr[i5] = (byte) (ft.b.a(str.charAt(i6 + 1)) + (ft.b.a(str.charAt(i6)) << 4));
        }
        return new ByteString(bArr);
    }

    public static ByteString D(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        byte[] bytes = str.getBytes(Charsets.UTF_8);
        Intrinsics.checkNotNullExpressionValue(bytes, "this as java.lang.String).getBytes(charset)");
        ByteString byteString = new ByteString(bytes);
        byteString.f16118i = str;
        return byteString;
    }

    public static ByteString F(byte[] bArr) {
        ByteString byteString = ByteString.f16115v;
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        Intrinsics.checkNotNullParameter(bArr, "<this>");
        int length = bArr.length;
        et.y.f(bArr.length, 0, length);
        return new ByteString(u.i(bArr, length));
    }

    public k8.g E(DiskCacheConfig diskCacheConfig) {
        int i5 = diskCacheConfig.a;
        Supplier supplier = diskCacheConfig.f4399c;
        String str = diskCacheConfig.f4398b;
        j8.b bVar = diskCacheConfig.f4404h;
        k8.h hVar = new k8.h(i5, supplier, str, bVar);
        ExecutorService newSingleThreadExecutor = Executors.newSingleThreadExecutor();
        return new k8.g(hVar, diskCacheConfig.f4403g, new k8.f(diskCacheConfig.f4402f, diskCacheConfig.f4401e, diskCacheConfig.f4400d), diskCacheConfig.f4405i, bVar, newSingleThreadExecutor);
    }

    public Object G() {
        int i5 = bg.a.a;
        if (bg.b.f2930e == null) {
            bg.b.f2930e = new ap.a(2);
        }
        synchronized (bg.b.f2929d) {
        }
        throw new IllegalStateException("Must call PhenotypeContext.setContext() first");
    }

    @Override // uh.g
    public Object a() {
        return new c0();
    }

    @Override // nc.y
    public Map b(byte[] bArr) {
        throw new IllegalStateException();
    }

    @Override // tm.a
    public String d() {
        switch (this.f11600d) {
            case 7:
                return "onWillAppear";
            case 11:
                return "onTabSelectionPrevented";
            case 13:
                return "onWillAppear";
            default:
                return "onNativeDismiss";
        }
    }

    @Override // nc.y
    public nc.x e() {
        throw new IllegalStateException();
    }

    @Override // o4.b
    public boolean f(float f2) {
        throw new IllegalStateException("not implemented");
    }

    @Override // tm.a
    /* renamed from: getEventName */
    public String getName() {
        switch (this.f11600d) {
            case 7:
                return "topWillAppear";
            case 11:
                return "topTabSelectionPrevented";
            case 13:
                return "topWillAppear";
            default:
                return "topNativeDismiss";
        }
    }

    @Override // o4.b
    public y4.a h() {
        throw new IllegalStateException("not implemented");
    }

    @Override // o4.b
    public boolean isEmpty() {
        return true;
    }

    @Override // o4.b
    public boolean j(float f2) {
        return false;
    }

    @Override // nc.y
    public mc.b k(byte[] bArr) {
        throw new IllegalStateException();
    }

    @Override // di.d0
    public Object l(IBinder iBinder) {
        int i5 = di.u.f7603g;
        if (iBinder == null) {
            return null;
        }
        IInterface queryLocalInterface = iBinder.queryLocalInterface("com.google.android.play.core.integrity.protocol.IExpressIntegrityService");
        return queryLocalInterface instanceof v ? (v) queryLocalInterface : new t(iBinder, "com.google.android.play.core.integrity.protocol.IExpressIntegrityService", 1);
    }

    @Override // nc.y
    public byte[] m() {
        throw new MediaDrmException("Attempting to open a session using a dummy ExoMediaDrm.");
    }

    @Override // ie.h0
    public void n() {
        synchronized (ke.b.f13282h) {
            Object obj = ke.b.f13283i;
            synchronized (obj) {
                if (ke.b.j) {
                    return;
                }
                long a = ke.b.a();
                synchronized (obj) {
                    ke.b.k = a;
                    ke.b.j = true;
                }
            }
        }
    }

    @Override // nc.y
    public boolean o(byte[] bArr, String str) {
        throw new IllegalStateException();
    }

    @Override // nc.y
    public void p(byte[] bArr, byte[] bArr2) {
        throw new IllegalStateException();
    }

    @Override // s8.c
    public void release(Object obj) {
        try {
            o8.a.a((Closeable) obj);
        } catch (IOException unused) {
        }
    }

    @Override // nc.y
    public byte[] s(byte[] bArr, byte[] bArr2) {
        throw new IllegalStateException();
    }

    @Override // o4.b
    public float t() {
        return 1.0f;
    }

    @Override // nc.y
    public void u(byte[] bArr) {
        throw new IllegalStateException();
    }

    @Override // nc.y
    public w v(byte[] bArr, List list, int i5, HashMap hashMap) {
        throw new IllegalStateException();
    }

    @Override // o4.b
    public float w() {
        return 0.0f;
    }

    @Override // nc.y
    public int x() {
        return 1;
    }

    @Override // qc.l
    public qc.v y(int i5, int i6) {
        return new qc.i();
    }

    @Override // nc.y
    public void release() {
    }

    @Override // qc.l
    public void r() {
    }

    @Override // ie.h0
    public void z() {
    }

    @Override // qc.l
    public void c(s sVar) {
    }

    @Override // nc.y
    public void i(ha.l lVar) {
    }

    @Override // nc.y
    public void q(byte[] bArr) {
    }
}
