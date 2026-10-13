package e4;

import a5.a0;
import a5.k0;
import ad.b0;
import ad.g0;
import android.app.Activity;
import android.app.ActivityManager;
import android.app.DownloadManager;
import android.app.KeyguardManager;
import android.app.NotificationManager;
import android.app.job.JobInfo;
import android.app.job.JobScheduler;
import android.content.ComponentName;
import android.content.Context;
import android.content.res.ColorStateList;
import android.content.res.Resources;
import android.content.res.TypedArray;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Typeface;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.drawable.Drawable;
import android.graphics.drawable.StateListDrawable;
import android.location.LocationManager;
import android.media.MediaCodec;
import android.media.MediaFormat;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.PersistableBundle;
import android.os.Process;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.util.Base64;
import android.util.Log;
import android.util.SparseArray;
import android.util.TypedValue;
import android.view.MenuItem;
import android.view.Surface;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;
import androidx.appcompat.widget.u0;
import androidx.core.app.NotificationCompat$Builder;
import androidx.core.graphics.drawable.IconCompat;
import androidx.core.view.v0;
import androidx.core.view.w0;
import androidx.lifecycle.LifecycleRegistry;
import androidx.lifecycle.x0;
import androidx.work.impl.WorkDatabase_Impl;
import app.rive.runtime.kotlin.fonts.Fonts;
import bs.l1;
import com.android.billingclient.api.BillingFlowParams;
import com.discord.R;
import com.discord.ads.AdsModule$getGoogleAdvertisingId$1;
import com.facebook.react.common.assets.ReactFontManager;
import com.facebook.react.modules.core.PermissionListener;
import com.facebook.react.uimanager.PixelUtil;
import com.google.android.datatransport.runtime.scheduling.jobscheduling.JobInfoSchedulerService;
import com.google.android.exoplayer2.Format;
import com.google.android.gms.internal.play_billing.t;
import com.google.android.gms.internal.play_billing.x;
import com.google.firebase.messaging.FirebaseMessagingService;
import com.reactnativecommunity.webview.RNCWebViewModule;
import hc.f0;
import io.sentry.k6;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.reflect.Method;
import java.net.MalformedURLException;
import java.net.URL;
import java.nio.ByteBuffer;
import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Set;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.TimeoutException;
import java.util.zip.Adler32;
import javax.inject.Provider;
import jc.q0;
import jc.s0;
import ke.d0;
import ke.w;
import kotlin.collections.CollectionsKt;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.modules.SerializersModule;
import qc.v;

/* loaded from: classes.dex */
public class m implements b0, yb.b, cd.l, PermissionListener, na.a, wd.e, Encoder, CompositeEncoder {

    /* renamed from: w, reason: collision with root package name */
    public static m f7961w;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7962d;

    /* renamed from: e, reason: collision with root package name */
    public Object f7963e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7964i;

    /* renamed from: v, reason: collision with root package name */
    public Object f7965v;

    public /* synthetic */ m(int i5, boolean z5) {
        this.f7962d = i5;
    }

    public static m b0(Context context, AttributeSet attributeSet, int[] iArr, int i5) {
        return new m(context, context.obtainStyledAttributes(attributeSet, iArr, i5, 0));
    }

    public static void f0(File file, File file2) {
        if (file2.isDirectory() && !file2.delete()) {
            Log.e("AtomicFile", "Failed to delete file which is a directory " + file2);
        }
        if (file.renameTo(file2)) {
            return;
        }
        Log.e("AtomicFile", "Failed to rename " + file + " to " + file2);
    }

    @Override // wd.e
    public int A() {
        return ((long[]) this.f7965v).length;
    }

    @Override // cd.l
    public int B(MediaCodec.BufferInfo bufferInfo) {
        int dequeueOutputBuffer;
        MediaCodec mediaCodec = (MediaCodec) this.f7963e;
        do {
            dequeueOutputBuffer = mediaCodec.dequeueOutputBuffer(bufferInfo, 0L);
            if (dequeueOutputBuffer == -3 && d0.a < 21) {
                this.f7965v = mediaCodec.getOutputBuffers();
            }
        } while (dequeueOutputBuffer == -3);
        return dequeueOutputBuffer;
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void C(l1 descriptor, int i5, byte b10) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Byte.valueOf(b10));
    }

    @Override // cd.l
    public void D(int i5) {
        ((MediaCodec) this.f7963e).setVideoScalingMode(i5);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public CompositeEncoder E(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        beginStructure(descriptor);
        return this;
    }

    @Override // cd.l
    public void F(le.h hVar, Handler handler) {
        ((MediaCodec) this.f7963e).setOnFrameRenderedListener(new cd.a(this, hVar, 1), handler);
    }

    @Override // na.a
    public Drawable G(oa.c cVar) {
        try {
            ta.a.D();
            if (cVar instanceof oa.d) {
                oa.d dVar = (oa.d) cVar;
                BitmapDrawable bitmapDrawable = new BitmapDrawable((Resources) this.f7963e, ((oa.g) dVar).f15806w);
                if ((((oa.g) dVar).f15808y == 0 || ((oa.g) dVar).f15808y == -1) && (((oa.g) dVar).E == 1 || ((oa.g) dVar).E == 0)) {
                    return bitmapDrawable;
                }
                return new com.facebook.drawee.drawable.f(bitmapDrawable, ((oa.g) dVar).f15808y, ((oa.g) dVar).E);
            }
            na.a aVar = (na.a) this.f7964i;
            if (aVar != null && aVar.h(cVar)) {
                return ((na.a) this.f7964i).G(cVar);
            }
            na.a aVar2 = (na.a) this.f7965v;
            if (aVar2 != null && aVar2.h(cVar)) {
                return ((na.a) this.f7965v).G(cVar);
            }
            ta.a.D();
            return null;
        } finally {
            ta.a.D();
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void H(SerialDescriptor enumDescriptor, int i5) {
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        String tag = (String) c0();
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        LinkedHashMap linkedHashMap = (LinkedHashMap) this.f7965v;
        String value = enumDescriptor.g(i5);
        Intrinsics.checkNotNullParameter(value, "value");
        linkedHashMap.put(tag, value);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public boolean I(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return true;
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void J(l1 descriptor, int i5, char c6) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Character.valueOf(c6));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void K(int i5) {
        S(c0(), Integer.valueOf(i5));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public Encoder L(SerialDescriptor inlineDescriptor) {
        Intrinsics.checkNotNullParameter(inlineDescriptor, "descriptor");
        Object c02 = c0();
        Intrinsics.checkNotNullParameter(inlineDescriptor, "inlineDescriptor");
        ((ArrayList) this.f7963e).add(c02);
        return this;
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void M(KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        if (!(serializer instanceof bs.b)) {
            serializer.serialize(this, obj);
            return;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Any");
        KSerializer l6 = ys.l.l((bs.b) serializer, this, obj);
        String a0 = a0("type");
        String value = l6.getDescriptor().a();
        Intrinsics.checkNotNullParameter(value, "value");
        S(a0, value);
        l6.serialize(this, obj);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void N(SerialDescriptor descriptor, int i5, double d6) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Double.valueOf(d6));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void O(long j) {
        S(c0(), Long.valueOf(j));
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void P(SerialDescriptor descriptor, int i5, long j) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Long.valueOf(j));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void Q(String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        Object c02 = c0();
        Intrinsics.checkNotNullParameter(value, "value");
        S(c02, value);
    }

    public BillingFlowParams R() {
        t tVar;
        ArrayList arrayList = (ArrayList) this.f7964i;
        if (arrayList == null || arrayList.isEmpty()) {
            throw new IllegalArgumentException("Details of the products must be provided.");
        }
        ArrayList arrayList2 = (ArrayList) this.f7964i;
        if (arrayList2 != null) {
            Iterator it = arrayList2.iterator();
            while (it.hasNext()) {
                if (((a5.e) it.next()) == null) {
                    throw new IllegalArgumentException("ProductDetailsParams cannot be null.");
                }
            }
        }
        BillingFlowParams billingFlowParams = new BillingFlowParams();
        short s2 = 0;
        int i5 = 1;
        billingFlowParams.a = !((a5.e) ((ArrayList) this.f7964i).get(0)).a.f3602b.optString("packageName").isEmpty();
        billingFlowParams.f3596b = (String) this.f7963e;
        a5.f fVar = (a5.f) this.f7965v;
        boolean z5 = (TextUtils.isEmpty((String) fVar.f154c) && TextUtils.isEmpty(null)) ? false : true;
        boolean isEmpty = TextUtils.isEmpty(null);
        if (z5 && !isEmpty) {
            throw new IllegalArgumentException("Please provide Old SKU purchase information(token/id) or original external transaction id, not both.");
        }
        if (!fVar.a && !z5 && isEmpty) {
            throw new IllegalArgumentException("Old SKU purchase information(token/id) or original external transaction id must be provided.");
        }
        a0 a0Var = new a0(i5, s2);
        a0Var.f125i = (String) fVar.f154c;
        a0Var.f124e = fVar.f153b;
        billingFlowParams.f3597c = a0Var;
        billingFlowParams.f3599e = new ArrayList();
        ArrayList arrayList3 = (ArrayList) this.f7964i;
        if (arrayList3 != null) {
            tVar = t.m(arrayList3);
        } else {
            com.google.android.gms.internal.play_billing.q qVar = t.f5834e;
            tVar = x.f5880w;
        }
        billingFlowParams.f3598d = tVar;
        return billingFlowParams;
    }

    public void S(Object obj, Object value) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(value, "value");
        LinkedHashMap linkedHashMap = (LinkedHashMap) this.f7965v;
        Intrinsics.checkNotNullParameter(value, "value");
        linkedHashMap.put(tag, value);
    }

    public ColorStateList T(int i5) {
        int resourceId;
        ColorStateList c6;
        TypedArray typedArray = (TypedArray) this.f7964i;
        return (!typedArray.hasValue(i5) || (resourceId = typedArray.getResourceId(i5, 0)) == 0 || (c6 = y0.b.c((Context) this.f7963e, resourceId)) == null) ? typedArray.getColorStateList(i5) : c6;
    }

    public Drawable U(int i5) {
        int resourceId;
        TypedArray typedArray = (TypedArray) this.f7964i;
        return (!typedArray.hasValue(i5) || (resourceId = typedArray.getResourceId(i5, 0)) == 0) ? typedArray.getDrawable(i5) : ys.d.J((Context) this.f7963e, resourceId);
    }

    public Drawable V(int i5) {
        int resourceId;
        Drawable d6;
        if (!((TypedArray) this.f7964i).hasValue(i5) || (resourceId = ((TypedArray) this.f7964i).getResourceId(i5, 0)) == 0) {
            return null;
        }
        androidx.appcompat.widget.x a = androidx.appcompat.widget.x.a();
        Context context = (Context) this.f7963e;
        synchronized (a) {
            d6 = a.a.d(context, resourceId, true);
        }
        return d6;
    }

    public Typeface W(int i5, int i6, u0 u0Var) {
        int resourceId = ((TypedArray) this.f7964i).getResourceId(i5, 0);
        if (resourceId == 0) {
            return null;
        }
        if (((TypedValue) this.f7965v) == null) {
            this.f7965v = new TypedValue();
        }
        Context context = (Context) this.f7963e;
        TypedValue typedValue = (TypedValue) this.f7965v;
        ThreadLocal threadLocal = a1.n.a;
        if (context.isRestricted()) {
            return null;
        }
        return a1.n.a(context, resourceId, typedValue, i6, u0Var, true, false);
    }

    public EditText X() {
        View findViewById = ((com.swmansion.rnscreens.b) this.f7963e).findViewById(R.id.search_src_text);
        if (findViewById instanceof EditText) {
            return (EditText) findViewById;
        }
        return null;
    }

    public String Y(SerialDescriptor descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return a0(descriptor.g(i5));
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0083  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x0110  */
    /* JADX WARN: Removed duplicated region for block: B:32:0x00b0 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean Z() {
        com.google.firebase.messaging.o oVar;
        if (((gj.c) this.f7965v).F("gcm.n.noui")) {
            return true;
        }
        FirebaseMessagingService firebaseMessagingService = (FirebaseMessagingService) this.f7964i;
        if (!((KeyguardManager) firebaseMessagingService.getSystemService("keyguard")).inKeyguardRestrictedInputMode()) {
            int myPid = Process.myPid();
            List<ActivityManager.RunningAppProcessInfo> runningAppProcesses = ((ActivityManager) firebaseMessagingService.getSystemService("activity")).getRunningAppProcesses();
            if (runningAppProcesses != null) {
                Iterator<ActivityManager.RunningAppProcessInfo> it = runningAppProcesses.iterator();
                while (true) {
                    if (!it.hasNext()) {
                        break;
                    }
                    ActivityManager.RunningAppProcessInfo next = it.next();
                    if (next.pid == myPid) {
                        if (next.importance == 100) {
                            return false;
                        }
                    }
                }
            }
        }
        String O = ((gj.c) this.f7965v).O("gcm.n.image");
        if (!TextUtils.isEmpty(O)) {
            try {
                oVar = new com.google.firebase.messaging.o(new URL(O));
            } catch (MalformedURLException unused) {
                Log.w("FirebaseMessaging", "Not downloading image, bad URL: " + O);
            }
            if (oVar != null) {
                ExecutorService executorService = (ExecutorService) this.f7963e;
                jg.g gVar = new jg.g();
                oVar.f6250e = executorService.submit(new a1.k(29, oVar, gVar));
                oVar.f6251i = gVar.a;
            }
            com.google.firebase.messaging.h a = com.google.firebase.messaging.e.a((FirebaseMessagingService) this.f7964i, (gj.c) this.f7965v);
            NotificationCompat$Builder notificationCompat$Builder = (NotificationCompat$Builder) a.a;
            if (oVar != null) {
                try {
                    jg.l lVar = oVar.f6251i;
                    bf.t.g(lVar);
                    TimeUnit timeUnit = TimeUnit.SECONDS;
                    Bitmap bitmap = (Bitmap) k0.i(lVar, 5L);
                    notificationCompat$Builder.h(bitmap);
                    x0.x xVar = new x0.x();
                    xVar.f20234e = bitmap == null ? null : IconCompat.c(bitmap);
                    xVar.f20235f = null;
                    xVar.f20236g = true;
                    notificationCompat$Builder.j(xVar);
                } catch (InterruptedException unused2) {
                    Log.w("FirebaseMessaging", "Interrupted while downloading image, showing notification without it");
                    oVar.close();
                    Thread.currentThread().interrupt();
                } catch (ExecutionException e9) {
                    Log.w("FirebaseMessaging", "Failed to download image: " + e9.getCause());
                } catch (TimeoutException unused3) {
                    Log.w("FirebaseMessaging", "Failed to download image in time, showing notification without it");
                    oVar.close();
                }
            }
            if (Log.isLoggable("FirebaseMessaging", 3)) {
                Log.d("FirebaseMessaging", "Showing notification");
            }
            ((NotificationManager) ((FirebaseMessagingService) this.f7964i).getSystemService("notification")).notify((String) a.f6240b, 0, ((NotificationCompat$Builder) a.a).c());
            return true;
        }
        oVar = null;
        if (oVar != null) {
        }
        com.google.firebase.messaging.h a10 = com.google.firebase.messaging.e.a((FirebaseMessagingService) this.f7964i, (gj.c) this.f7965v);
        NotificationCompat$Builder notificationCompat$Builder2 = (NotificationCompat$Builder) a10.a;
        if (oVar != null) {
        }
        if (Log.isLoggable("FirebaseMessaging", 3)) {
        }
        ((NotificationManager) ((FirebaseMessagingService) this.f7964i).getSystemService("notification")).notify((String) a10.f6240b, 0, ((NotificationCompat$Builder) a10.a).c());
        return true;
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void a() {
        String tag = (String) c0();
        Intrinsics.checkNotNullParameter(tag, "tag");
    }

    public String a0(String childName) {
        Intrinsics.checkNotNullParameter(childName, "nestedName");
        String parentName = (String) CollectionsKt.S((ArrayList) this.f7963e);
        if (parentName == null) {
            parentName = "";
        }
        Intrinsics.checkNotNullParameter(parentName, "parentName");
        Intrinsics.checkNotNullParameter(childName, "childName");
        if (parentName.length() == 0) {
            return childName;
        }
        return parentName + '.' + childName;
    }

    @Override // ad.b0
    public void b(ke.b0 b0Var, qc.l lVar, g0 g0Var) {
        this.f7964i = b0Var;
        g0Var.a();
        g0Var.b();
        v y5 = lVar.y(g0Var.f367d, 5);
        this.f7965v = y5;
        y5.e((Format) this.f7963e);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public CompositeEncoder beginStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        return this;
    }

    @Override // ad.b0
    public void c(w wVar) {
        long c6;
        long j;
        ke.b.l((ke.b0) this.f7964i);
        int i5 = d0.a;
        ke.b0 b0Var = (ke.b0) this.f7964i;
        synchronized (b0Var) {
            try {
                long j5 = b0Var.f13285c;
                c6 = j5 != -9223372036854775807L ? j5 + b0Var.f13284b : b0Var.c();
            } finally {
            }
        }
        ke.b0 b0Var2 = (ke.b0) this.f7964i;
        synchronized (b0Var2) {
            j = b0Var2.f13284b;
        }
        if (c6 == -9223372036854775807L || j == -9223372036854775807L) {
            return;
        }
        Format format = (Format) this.f7963e;
        if (j != format.M) {
            f0 a = format.a();
            a.f9681o = j;
            Format format2 = new Format(a);
            this.f7963e = format2;
            ((v) this.f7965v).e(format2);
        }
        int a10 = wVar.a();
        ((v) this.f7965v).d(a10, wVar);
        ((v) this.f7965v).b(c6, 1, a10, 0, null);
    }

    public Object c0() {
        ArrayList arrayList = (ArrayList) this.f7963e;
        if (arrayList.isEmpty()) {
            throw new xr.f("No tag in stack for requested element");
        }
        return arrayList.remove(c0.f(arrayList));
    }

    @Override // wd.e
    public int d(long j) {
        long[] jArr = (long[]) this.f7965v;
        int b10 = d0.b(jArr, j, false);
        if (b10 < jArr.length) {
            return b10;
        }
        return -1;
    }

    public void d0(androidx.lifecycle.n nVar) {
        x0 x0Var = (x0) this.f7965v;
        if (x0Var != null) {
            x0Var.run();
        }
        x0 x0Var2 = new x0((LifecycleRegistry) this.f7963e, nVar);
        this.f7965v = x0Var2;
        Handler handler = (Handler) this.f7964i;
        Intrinsics.checkNotNull(x0Var2);
        handler.postAtFrontOfQueue(x0Var2);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void e(double d6) {
        S(c0(), Double.valueOf(d6));
    }

    public void e0() {
        ((TypedArray) this.f7964i).recycle();
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        if (!((ArrayList) this.f7963e).isEmpty()) {
            c0();
        }
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void f(short s2) {
        S(c0(), Short.valueOf(s2));
    }

    @Override // cd.l
    public void flush() {
        ((MediaCodec) this.f7963e).flush();
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void g(SerialDescriptor descriptor, int i5, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        ((ArrayList) this.f7963e).add(Y(descriptor, i5));
        M(serializer, obj);
    }

    public void g0(wb.i iVar, int i5, boolean z5) {
        cc.b bVar = (cc.b) this.f7965v;
        Context context = (Context) this.f7963e;
        ComponentName componentName = new ComponentName(context, (Class<?>) JobInfoSchedulerService.class);
        JobScheduler jobScheduler = (JobScheduler) context.getSystemService("jobscheduler");
        Adler32 adler32 = new Adler32();
        adler32.update(context.getPackageName().getBytes(Charset.forName("UTF-8")));
        adler32.update(iVar.a.getBytes(Charset.forName("UTF-8")));
        adler32.update(ByteBuffer.allocate(4).putInt(gc.a.a(iVar.f19705c)).array());
        byte[] bArr = iVar.f19704b;
        if (bArr != null) {
            adler32.update(bArr);
        }
        int value = (int) adler32.getValue();
        if (!z5) {
            Iterator<JobInfo> it = jobScheduler.getAllPendingJobs().iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                JobInfo next = it.next();
                int i6 = next.getExtras().getInt("attemptNumber");
                if (next.getId() == value) {
                    if (i6 >= i5) {
                        io.sentry.config.a.k(iVar, "JobInfoScheduler", "Upload for context %s is already scheduled. Returning...");
                        return;
                    }
                }
            }
        }
        Cursor rawQuery = ((dc.h) ((dc.d) this.f7964i)).c().rawQuery("SELECT next_request_ms FROM transport_contexts WHERE backend_name = ? and priority = ?", new String[]{iVar.a, String.valueOf(gc.a.a(iVar.f19705c))});
        try {
            Long valueOf = rawQuery.moveToNext() ? Long.valueOf(rawQuery.getLong(0)) : 0L;
            rawQuery.close();
            long longValue = valueOf.longValue();
            JobInfo.Builder builder = new JobInfo.Builder(value, componentName);
            tb.d dVar = iVar.f19705c;
            builder.setMinimumLatency(bVar.a(dVar, longValue, i5));
            Set set = ((cc.c) bVar.f3367b.get(dVar)).f3369c;
            if (set.contains(cc.d.f3370d)) {
                builder.setRequiredNetworkType(2);
            } else {
                builder.setRequiredNetworkType(1);
            }
            if (set.contains(cc.d.f3372i)) {
                builder.setRequiresCharging(true);
            }
            if (set.contains(cc.d.f3371e)) {
                builder.setRequiresDeviceIdle(true);
            }
            PersistableBundle persistableBundle = new PersistableBundle();
            persistableBundle.putInt("attemptNumber", i5);
            persistableBundle.putString("backendName", iVar.a);
            persistableBundle.putInt("priority", gc.a.a(dVar));
            byte[] bArr2 = iVar.f19704b;
            if (bArr2 != null) {
                persistableBundle.putString("extras", Base64.encodeToString(bArr2, 0));
            }
            builder.setExtras(persistableBundle);
            Object[] objArr = {iVar, Integer.valueOf(value), Long.valueOf(bVar.a(dVar, longValue, i5)), valueOf, Integer.valueOf(i5)};
            String s2 = io.sentry.config.a.s("JobInfoScheduler");
            if (Log.isLoggable(s2, 3)) {
                Log.d(s2, String.format("Scheduling upload for context %s with jobId=%d in %dms(Backend next call timestamp %d). Attempt %d", objArr));
            }
            jobScheduler.schedule(builder.build());
        } catch (Throwable th2) {
            rawQuery.close();
            throw th2;
        }
    }

    @Override // javax.inject.Provider
    public Object get() {
        return new m((Context) ((Provider) this.f7963e).get(), (dc.d) ((Provider) this.f7964i).get(), (cc.b) ((r8.c) this.f7965v).get(), 10);
    }

    @Override // cd.l
    public ByteBuffer getInputBuffer(int i5) {
        return d0.a >= 21 ? ((MediaCodec) this.f7963e).getInputBuffer(i5) : ((ByteBuffer[]) this.f7964i)[i5];
    }

    @Override // cd.l
    public ByteBuffer getOutputBuffer(int i5) {
        return d0.a >= 21 ? ((MediaCodec) this.f7963e).getOutputBuffer(i5) : ((ByteBuffer[]) this.f7965v)[i5];
    }

    @Override // cd.l
    public MediaFormat getOutputFormat() {
        return ((MediaCodec) this.f7963e).getOutputFormat();
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public SerializersModule getSerializersModule() {
        return (SerializersModule) this.f7964i;
    }

    @Override // na.a
    public boolean h(oa.c cVar) {
        return true;
    }

    public FileOutputStream h0() {
        File file = (File) this.f7964i;
        File file2 = (File) this.f7965v;
        if (file2.exists()) {
            f0(file2, (File) this.f7963e);
        }
        try {
            return new FileOutputStream(file);
        } catch (FileNotFoundException unused) {
            if (!file.getParentFile().mkdirs()) {
                throw new IOException("Failed to create directory for " + file);
            }
            try {
                return new FileOutputStream(file);
            } catch (FileNotFoundException e9) {
                throw new IOException("Failed to create new file " + file, e9);
            }
        }
    }

    @Override // wd.e
    public long i(int i5) {
        long[] jArr = (long[]) this.f7965v;
        ke.b.g(i5 >= 0);
        ke.b.g(i5 < jArr.length);
        return jArr[i5];
    }

    public void i0(Context context, MenuItem menuItem, kn.b tabsScreen, gn.b bVar) {
        Drawable drawable;
        fh.e eVar;
        Integer num;
        Integer num2;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(menuItem, "menuItem");
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        gn.c cVar = (gn.c) this.f7965v;
        cVar.getClass();
        Intrinsics.checkNotNullParameter(menuItem, "menuItem");
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        if (!Intrinsics.areEqual(menuItem.getTitle(), tabsScreen.getTabTitle())) {
            menuItem.setTitle(tabsScreen.getTabTitle());
        }
        if (tabsScreen.getSelectedIcon() == null || tabsScreen.getIcon() == null) {
            drawable = tabsScreen.getIcon();
        } else {
            StateListDrawable stateListDrawable = new StateListDrawable();
            int[] iArr = {android.R.attr.state_checked};
            Drawable selectedIcon = tabsScreen.getSelectedIcon();
            stateListDrawable.addState(iArr, selectedIcon != null ? selectedIcon.mutate() : null);
            int[] iArr2 = new int[0];
            Drawable icon = tabsScreen.getIcon();
            stateListDrawable.addState(iArr2, icon != null ? icon.mutate() : null);
            drawable = stateListDrawable;
        }
        if (!Intrinsics.areEqual(menuItem.getIcon(), drawable)) {
            menuItem.setIcon(drawable);
        }
        rg.b bVar2 = cVar.a.f8625e;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(menuItem, "menuItem");
        Intrinsics.checkNotNullParameter(tabsScreen, "tabsScreen");
        int itemId = menuItem.getItemId();
        String badgeValue = tabsScreen.getBadgeValue();
        if (badgeValue == null) {
            og.a aVar = (og.a) bVar2.S.get(itemId);
            if (aVar != null) {
                og.c cVar2 = aVar.f15865w;
                og.b bVar3 = cVar2.a;
                Boolean bool = Boolean.FALSE;
                bVar3.Q = bool;
                cVar2.f15876b.Q = bool;
                aVar.setVisible(bool.booleanValue(), false);
                return;
            }
            return;
        }
        Integer intOrNull = StringsKt.toIntOrNull(badgeValue);
        bVar2.getClass();
        if (itemId == -1) {
            throw new IllegalArgumentException(itemId + " is not a valid view id");
        }
        SparseArray sparseArray = bVar2.S;
        og.a aVar2 = (og.a) sparseArray.get(itemId);
        if (aVar2 == null) {
            og.a aVar3 = new og.a(bVar2.getContext(), null);
            sparseArray.put(itemId, aVar3);
            aVar2 = aVar3;
        }
        og.c cVar3 = aVar2.f15865w;
        if (itemId == -1) {
            throw new IllegalArgumentException(itemId + " is not a valid view id");
        }
        fh.h[] hVarArr = bVar2.f8612y;
        if (hVarArr != null) {
            for (fh.h hVar : hVarArr) {
                if (hVar instanceof fh.e) {
                    eVar = (fh.e) hVar;
                    if (eVar.getId() == itemId) {
                        break;
                    }
                }
            }
        }
        eVar = null;
        if (eVar != null) {
            eVar.setBadge(aVar2);
        }
        Intrinsics.checkNotNullExpressionValue(aVar2, "getOrCreateBadge(...)");
        og.b bVar4 = cVar3.a;
        Boolean bool2 = Boolean.TRUE;
        bVar4.Q = bool2;
        cVar3.f15876b.Q = bool2;
        aVar2.setVisible(bool2.booleanValue(), false);
        boolean a = cVar3.a();
        og.b bVar5 = cVar3.f15876b;
        og.b bVar6 = cVar3.a;
        if (a) {
            bVar6.G = null;
            bVar5.G = null;
            aVar2.h();
        }
        if (bVar5.H != -1) {
            bVar6.H = -1;
            bVar5.H = -1;
            if (!cVar3.a()) {
                aVar2.h();
            }
        }
        if (intOrNull != null) {
            int max = Math.max(0, intOrNull.intValue());
            if (bVar5.H != max) {
                bVar6.H = max;
                bVar5.H = max;
                if (!cVar3.a()) {
                    aVar2.h();
                }
            }
        } else if (!Intrinsics.areEqual(badgeValue, "") && !TextUtils.equals(bVar5.G, badgeValue)) {
            bVar6.G = badgeValue;
            bVar5.G = badgeValue;
            aVar2.h();
        }
        int K0 = (bVar == null || (num2 = bVar.f9387p) == null) ? m3.n.K0(context, R.attr.colorOnError) : num2.intValue();
        if (aVar2.f15863i.a.getColor() != K0) {
            bVar6.f15871i = Integer.valueOf(K0);
            bVar5.f15871i = Integer.valueOf(K0);
            aVar2.j();
        }
        int K02 = (bVar == null || (num = bVar.f9386o) == null) ? m3.n.K0(context, R.attr.colorError) : num.intValue();
        bVar6.f15870e = Integer.valueOf(K02);
        bVar5.f15870e = Integer.valueOf(K02);
        ColorStateList valueOf = ColorStateList.valueOf(cVar3.f15876b.f15870e.intValue());
        lh.i iVar = aVar2.f15862e;
        if (iVar.f14001e.f13985d != valueOf) {
            iVar.q(valueOf);
            aVar2.invalidateSelf();
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void j(byte b10) {
        S(c0(), Byte.valueOf(b10));
    }

    /* JADX WARN: Removed duplicated region for block: B:111:0x01f2  */
    /* JADX WARN: Removed duplicated region for block: B:138:0x0286  */
    /* JADX WARN: Removed duplicated region for block: B:140:0x0289  */
    /* JADX WARN: Removed duplicated region for block: B:156:0x02a8 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:90:0x0191  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void j0(Context context, hn.f tabsContainer) {
        int i5;
        Iterator it;
        Iterator it2;
        w0 w0Var;
        String str;
        Integer intOrNull;
        String str2;
        float dimension;
        float dimension2;
        Float f2;
        Float f10;
        Boolean bool;
        Integer num;
        Integer num2;
        gn.a aVar;
        Integer num3;
        gn.a aVar2;
        Integer num4;
        gn.a aVar3;
        Integer num5;
        gn.a aVar4;
        Integer num6;
        gn.a aVar5;
        Integer num7;
        gn.a aVar6;
        Integer num8;
        gn.a aVar7;
        Integer num9;
        gn.a aVar8;
        Integer num10;
        Integer num11;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(tabsContainer, "tabsContainer");
        gn.b appearance$react_native_screens_release = tabsContainer.getSelectedTab$react_native_screens_release().f13463d.getAppearance$react_native_screens_release();
        gn.c cVar = (gn.c) this.f7965v;
        boolean tabBarHidden$react_native_screens_release = tabsContainer.getTabBarHidden$react_native_screens_release();
        int[][] iArr = cVar.f9388b;
        Intrinsics.checkNotNullParameter(context, "context");
        hn.a aVar9 = cVar.a;
        aVar9.setVisibility(!tabBarHidden$react_native_screens_release ? 0 : 8);
        aVar9.setBackgroundColor((appearance$react_native_screens_release == null || (num11 = appearance$react_native_screens_release.a) == null) ? m3.n.K0(context, R.attr.colorSurfaceContainer) : num11.intValue());
        aVar9.setItemTextColor(new ColorStateList(iArr, new int[]{(appearance$react_native_screens_release == null || (aVar8 = appearance$react_native_screens_release.f9380g) == null || (num10 = aVar8.f9374b) == null) ? m3.n.K0(context, R.attr.colorOnSurfaceVariant) : num10.intValue(), (appearance$react_native_screens_release == null || (aVar6 = appearance$react_native_screens_release.f9378e) == null || (num8 = aVar6.f9374b) == null) ? m3.n.K0(context, R.attr.colorOnSurface) : num8.intValue(), (appearance$react_native_screens_release == null || (aVar7 = appearance$react_native_screens_release.f9379f) == null || (num9 = aVar7.f9374b) == null) ? m3.n.K0(context, R.attr.colorOnSurfaceVariant) : num9.intValue(), (appearance$react_native_screens_release == null || (aVar5 = appearance$react_native_screens_release.f9377d) == null || (num7 = aVar5.f9374b) == null) ? m3.n.K0(context, R.attr.colorSecondary) : num7.intValue()}));
        aVar9.setItemIconTintList(new ColorStateList(iArr, new int[]{(appearance$react_native_screens_release == null || (aVar4 = appearance$react_native_screens_release.f9380g) == null || (num6 = aVar4.a) == null) ? m3.n.K0(context, R.attr.colorOnSurfaceVariant) : num6.intValue(), (appearance$react_native_screens_release == null || (aVar2 = appearance$react_native_screens_release.f9378e) == null || (num4 = aVar2.a) == null) ? m3.n.K0(context, R.attr.colorOnSecondaryContainer) : num4.intValue(), (appearance$react_native_screens_release == null || (aVar3 = appearance$react_native_screens_release.f9379f) == null || (num5 = aVar3.a) == null) ? m3.n.K0(context, R.attr.colorOnSurfaceVariant) : num5.intValue(), (appearance$react_native_screens_release == null || (aVar = appearance$react_native_screens_release.f9377d) == null || (num3 = aVar.a) == null) ? m3.n.K0(context, R.attr.colorOnSurfaceVariant) : num3.intValue()}));
        String str3 = appearance$react_native_screens_release != null ? appearance$react_native_screens_release.f9376c : null;
        boolean z5 = true;
        if (str3 != null) {
            int hashCode = str3.hashCode();
            if (hashCode != -63201645) {
                if (hashCode != 1191572123) {
                    if (hashCode == 1648599514 && str3.equals("unlabeled")) {
                        i5 = 2;
                    }
                } else if (str3.equals("selected")) {
                    i5 = 0;
                }
            } else if (str3.equals("labeled")) {
                i5 = 1;
            }
            aVar9.setLabelVisibilityMode(i5);
            aVar9.setItemRippleColor(ColorStateList.valueOf((appearance$react_native_screens_release != null || (num2 = appearance$react_native_screens_release.f9375b) == null) ? m3.n.K0(context, R.attr.itemRippleColor) : num2.intValue()));
            int K0 = (appearance$react_native_screens_release != null || (num = appearance$react_native_screens_release.f9381h) == null) ? m3.n.K0(context, R.attr.colorSecondaryContainer) : num.intValue();
            if (appearance$react_native_screens_release != null && (bool = appearance$react_native_screens_release.f9382i) != null) {
                z5 = bool.booleanValue();
            }
            aVar9.setItemActiveIndicatorEnabled(z5);
            aVar9.setItemActiveIndicatorColor(ColorStateList.valueOf(K0));
            it = ((ArrayList) this.f7964i).iterator();
            int i6 = 0;
            while (it.hasNext()) {
                Object next = it.next();
                int i10 = i6 + 1;
                if (i6 < 0) {
                    c0.k();
                    throw null;
                }
                kn.e eVar = (kn.e) next;
                MenuItem findItem = ((hn.a) this.f7963e).getMenu().findItem(i10);
                if (findItem == null) {
                    throw new IllegalStateException(k0.d.i(i10, "[RNScreens] Missing MenuItem for id: ").toString());
                }
                if (findItem.getItemId() != i10) {
                    throw new IllegalStateException("[RNScreens] Illegal state: menu items are shuffled");
                }
                i0(context, findItem, eVar.f13463d, appearance$react_native_screens_release);
                i6 = i10;
            }
            Intrinsics.checkNotNullParameter(context, "context");
            View childAt = aVar9.getChildAt(0);
            Intrinsics.checkNotNull(childAt, "null cannot be cast to non-null type android.view.ViewGroup");
            it2 = new v0((ViewGroup) childAt).iterator();
            while (true) {
                w0Var = (w0) it2;
                if (w0Var.hasNext()) {
                    return;
                }
                View view = (View) w0Var.next();
                TextView textView = (TextView) view.findViewById(R.id.navigation_bar_item_large_label_view);
                TextView textView2 = (TextView) view.findViewById(R.id.navigation_bar_item_small_label_view);
                boolean areEqual = Intrinsics.areEqual(appearance$react_native_screens_release != null ? appearance$react_native_screens_release.f9385n : null, Fonts.Font.STYLE_ITALIC);
                int intValue = Intrinsics.areEqual(appearance$react_native_screens_release != null ? appearance$react_native_screens_release.f9384m : null, "bold") ? ReactFontManager.TypefaceStyle.BOLD : (appearance$react_native_screens_release == null || (str = appearance$react_native_screens_release.f9384m) == null || (intOrNull = StringsKt.toIntOrNull(str)) == null) ? ReactFontManager.TypefaceStyle.NORMAL : intOrNull.intValue();
                ReactFontManager companion = ReactFontManager.INSTANCE.getInstance();
                if (appearance$react_native_screens_release == null || (str2 = appearance$react_native_screens_release.j) == null) {
                    str2 = "";
                }
                Typeface typeface = companion.getTypeface(str2, intValue, areEqual, context.getAssets());
                if (appearance$react_native_screens_release != null && (f10 = appearance$react_native_screens_release.k) != null) {
                    if (f10.floatValue() <= 0.0f) {
                        f10 = null;
                    }
                    if (f10 != null) {
                        dimension = PixelUtil.toPixelFromSP$default(f10.floatValue(), 0.0f, 2, null);
                        if (appearance$react_native_screens_release != null && (f2 = appearance$react_native_screens_release.f9383l) != null) {
                            if (f2.floatValue() <= 0.0f) {
                                f2 = null;
                            }
                            if (f2 != null) {
                                dimension2 = PixelUtil.toPixelFromSP$default(f2.floatValue(), 0.0f, 2, null);
                                textView2.setTextSize(0, dimension);
                                textView2.setTypeface(typeface);
                                textView.setTextSize(0, dimension2);
                                textView.setTypeface(typeface);
                            }
                        }
                        dimension2 = context.getResources().getDimension(R.dimen.design_bottom_navigation_text_size);
                        textView2.setTextSize(0, dimension);
                        textView2.setTypeface(typeface);
                        textView.setTextSize(0, dimension2);
                        textView.setTypeface(typeface);
                    }
                }
                dimension = context.getResources().getDimension(R.dimen.design_bottom_navigation_text_size);
                if (appearance$react_native_screens_release != null) {
                    if (f2.floatValue() <= 0.0f) {
                    }
                    if (f2 != null) {
                    }
                }
                dimension2 = context.getResources().getDimension(R.dimen.design_bottom_navigation_text_size);
                textView2.setTextSize(0, dimension);
                textView2.setTypeface(typeface);
                textView.setTextSize(0, dimension2);
                textView.setTypeface(typeface);
            }
        }
        i5 = -1;
        aVar9.setLabelVisibilityMode(i5);
        aVar9.setItemRippleColor(ColorStateList.valueOf((appearance$react_native_screens_release != null || (num2 = appearance$react_native_screens_release.f9375b) == null) ? m3.n.K0(context, R.attr.itemRippleColor) : num2.intValue()));
        if (appearance$react_native_screens_release != null) {
        }
        if (appearance$react_native_screens_release != null) {
            z5 = bool.booleanValue();
        }
        aVar9.setItemActiveIndicatorEnabled(z5);
        aVar9.setItemActiveIndicatorColor(ColorStateList.valueOf(K0));
        it = ((ArrayList) this.f7964i).iterator();
        int i62 = 0;
        while (it.hasNext()) {
        }
        Intrinsics.checkNotNullParameter(context, "context");
        View childAt2 = aVar9.getChildAt(0);
        Intrinsics.checkNotNull(childAt2, "null cannot be cast to non-null type android.view.ViewGroup");
        it2 = new v0((ViewGroup) childAt2).iterator();
        while (true) {
            w0Var = (w0) it2;
            if (w0Var.hasNext()) {
            }
            textView2.setTextSize(0, dimension);
            textView2.setTypeface(typeface);
            textView.setTextSize(0, dimension2);
            textView.setTypeface(typeface);
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void k(boolean z5) {
        S(c0(), Boolean.valueOf(z5));
    }

    public void k0(String str, Object obj) {
        m mVar = new m(8, false);
        ((m) this.f7965v).f7965v = mVar;
        this.f7965v = mVar;
        mVar.f7964i = obj;
        mVar.f7963e = str;
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void l(SerialDescriptor descriptor, int i5, float f2) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Float.valueOf(f2));
    }

    @Override // cd.l
    public void m(int i5, mc.c cVar, long j) {
        ((MediaCodec) this.f7963e).queueSecureInputBuffer(i5, 0, cVar.f14434i, j, 0);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void n(int i5, int i6, SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Integer.valueOf(i6));
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void o(float f2) {
        S(c0(), Float.valueOf(f2));
    }

    @Override // com.facebook.react.modules.core.PermissionListener
    public boolean onRequestPermissionsResult(int i5, String[] strArr, int[] iArr) {
        Activity currentActivity;
        DownloadManager.Request request;
        RNCWebViewModule rNCWebViewModule = (RNCWebViewModule) this.f7965v;
        if (i5 != 1) {
            return false;
        }
        if (iArr.length <= 0 || iArr[0] != 0) {
            currentActivity = rNCWebViewModule.getCurrentActivity();
            Toast.makeText(currentActivity.getApplicationContext(), (String) this.f7964i, 1).show();
            return true;
        }
        request = rNCWebViewModule.downloadRequest;
        if (request != null) {
            rNCWebViewModule.downloadFile((String) this.f7963e);
        }
        return true;
    }

    @Override // cd.l
    public void p(long j, int i5, int i6, int i10) {
        ((MediaCodec) this.f7963e).queueInputBuffer(i5, 0, i6, j, i10);
    }

    @Override // wd.e
    public List q(long j) {
        List list = (List) this.f7963e;
        ArrayList arrayList = new ArrayList();
        ArrayList arrayList2 = new ArrayList();
        for (int i5 = 0; i5 < list.size(); i5++) {
            long[] jArr = (long[]) this.f7964i;
            int i6 = i5 * 2;
            if (jArr[i6] <= j && j < jArr[i6 + 1]) {
                fe.e eVar = (fe.e) list.get(i5);
                wd.b bVar = eVar.a;
                if (bVar.f19806w == -3.4028235E38f) {
                    arrayList2.add(eVar);
                } else {
                    arrayList.add(bVar);
                }
            }
        }
        Collections.sort(arrayList2, new com.facebook.react.uimanager.a(4));
        for (int i10 = 0; i10 < arrayList2.size(); i10++) {
            wd.a a = ((fe.e) arrayList2.get(i10)).a.a();
            a.f19785e = (-1) - i10;
            a.f19786f = 1;
            arrayList.add(a.a());
        }
        return arrayList;
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void r(l1 descriptor, int i5, short s2) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Short.valueOf(s2));
    }

    @Override // cd.l
    public void release() {
        this.f7964i = null;
        this.f7965v = null;
        ((MediaCodec) this.f7963e).release();
    }

    @Override // cd.l
    public void releaseOutputBuffer(int i5, boolean z5) {
        ((MediaCodec) this.f7963e).releaseOutputBuffer(i5, z5);
    }

    @Override // cd.l
    public void s(int i5, long j) {
        ((MediaCodec) this.f7963e).releaseOutputBuffer(i5, j);
    }

    @Override // cd.l
    public void setOutputSurface(Surface surface) {
        ((MediaCodec) this.f7963e).setOutputSurface(surface);
    }

    @Override // cd.l
    public void setParameters(Bundle bundle) {
        ((MediaCodec) this.f7963e).setParameters(bundle);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public Encoder t(l1 descriptor, int i5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        String Y = Y(descriptor, i5);
        SerialDescriptor inlineDescriptor = descriptor.i(i5);
        Intrinsics.checkNotNullParameter(inlineDescriptor, "inlineDescriptor");
        ((ArrayList) this.f7963e).add(Y);
        return this;
    }

    public String toString() {
        switch (this.f7962d) {
            case 9:
                StringBuilder sb2 = new StringBuilder(32);
                sb2.append((String) this.f7963e);
                sb2.append('{');
                m mVar = (m) ((m) this.f7964i).f7965v;
                String str = "";
                while (mVar != null) {
                    Object obj = mVar.f7964i;
                    sb2.append(str);
                    String str2 = (String) mVar.f7963e;
                    if (str2 != null) {
                        sb2.append(str2);
                        sb2.append('=');
                    }
                    if (obj == null || !obj.getClass().isArray()) {
                        sb2.append(obj);
                    } else {
                        sb2.append((CharSequence) Arrays.deepToString(new Object[]{obj}), 1, r2.length() - 1);
                    }
                    mVar = (m) mVar.f7965v;
                    str = ", ";
                }
                sb2.append('}');
                return sb2.toString();
            case 12:
                StringBuilder sb3 = new StringBuilder(32);
                sb3.append((String) this.f7963e);
                sb3.append('{');
                io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) ((io.sentry.internal.debugmeta.c) this.f7964i).f11623i;
                String str3 = "";
                while (cVar != null) {
                    Object obj2 = cVar.f11622e;
                    sb3.append(str3);
                    if (obj2 == null || !obj2.getClass().isArray()) {
                        sb3.append(obj2);
                    } else {
                        sb3.append((CharSequence) Arrays.deepToString(new Object[]{obj2}), 1, r2.length() - 1);
                    }
                    cVar = (io.sentry.internal.debugmeta.c) cVar.f11623i;
                    str3 = ", ";
                }
                sb3.append('}');
                return sb3.toString();
            case 20:
                StringBuilder sb4 = new StringBuilder(32);
                sb4.append((String) this.f7963e);
                sb4.append('{');
                e eVar = (e) ((e) this.f7964i).f7944i;
                String str4 = "";
                while (eVar != null) {
                    AdsModule$getGoogleAdvertisingId$1 adsModule$getGoogleAdvertisingId$1 = (AdsModule$getGoogleAdvertisingId$1) eVar.f7943e;
                    sb4.append(str4);
                    if (adsModule$getGoogleAdvertisingId$1 == null || !AdsModule$getGoogleAdvertisingId$1.class.isArray()) {
                        sb4.append(adsModule$getGoogleAdvertisingId$1);
                    } else {
                        String deepToString = Arrays.deepToString(new Object[]{adsModule$getGoogleAdvertisingId$1});
                        sb4.append((CharSequence) deepToString, 1, deepToString.length() - 1);
                    }
                    eVar = (e) eVar.f7944i;
                    str4 = ", ";
                }
                sb4.append('}');
                return sb4.toString();
            default:
                return super.toString();
        }
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void u(char c6) {
        S(c0(), Character.valueOf(c6));
    }

    @Override // cd.l
    public int v() {
        return ((MediaCodec) this.f7963e).dequeueInputBuffer(0L);
    }

    @Override // kotlinx.serialization.encoding.Encoder
    public void w() {
        CollectionsKt.Q((ArrayList) this.f7963e);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void x(SerialDescriptor descriptor, int i5, boolean z5) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        S(Y(descriptor, i5), Boolean.valueOf(z5));
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void y(SerialDescriptor descriptor, int i5, String value) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(value, "value");
        String Y = Y(descriptor, i5);
        Intrinsics.checkNotNullParameter(value, "value");
        S(Y, value);
    }

    @Override // kotlinx.serialization.encoding.CompositeEncoder
    public void z(SerialDescriptor descriptor, int i5, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        ((ArrayList) this.f7963e).add(Y(descriptor, i5));
        nt.a.n(this, serializer, obj);
    }

    public /* synthetic */ m(Object obj, Object obj2, Object obj3, int i5) {
        this.f7962d = i5;
        this.f7963e = obj;
        this.f7964i = obj2;
        this.f7965v = obj3;
    }

    public m(hn.a bottomNavigationView, ArrayList tabsScreenFragments) {
        this.f7962d = 23;
        Intrinsics.checkNotNullParameter(bottomNavigationView, "bottomNavigationView");
        Intrinsics.checkNotNullParameter(tabsScreenFragments, "tabsScreenFragments");
        this.f7963e = bottomNavigationView;
        this.f7964i = tabsScreenFragments;
        this.f7965v = new gn.c(bottomNavigationView);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public m(int i5) {
        this(new io.sentry.protocol.v(), new k6(), (io.sentry.c) null);
        this.f7962d = i5;
        switch (i5) {
            case 25:
                break;
            default:
                this.f7963e = new ArrayList();
                break;
        }
    }

    public m(androidx.lifecycle.w provider) {
        this.f7962d = 5;
        Intrinsics.checkNotNullParameter(provider, "provider");
        this.f7963e = new LifecycleRegistry(provider);
        this.f7964i = new Handler();
    }

    public m(WorkDatabase_Impl database) {
        this.f7962d = 0;
        this.f7963e = database;
        Intrinsics.checkNotNullParameter(database, "database");
        new b(database, false, 4);
        this.f7964i = new h(database, 2);
        this.f7965v = new h(database, 3);
    }

    public m(ArrayList arrayList) {
        this.f7962d = 21;
        this.f7963e = Collections.unmodifiableList(new ArrayList(arrayList));
        this.f7964i = new long[arrayList.size() * 2];
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            fe.e eVar = (fe.e) arrayList.get(i5);
            int i6 = i5 * 2;
            long[] jArr = (long[]) this.f7964i;
            jArr[i6] = eVar.f8520b;
            jArr[i6 + 1] = eVar.f8521c;
        }
        long[] jArr2 = (long[]) this.f7964i;
        long[] copyOf = Arrays.copyOf(jArr2, jArr2.length);
        this.f7965v = copyOf;
        Arrays.sort(copyOf);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public m(fs.a aVar) {
        this(22);
        this.f7962d = 22;
        this.f7964i = aVar.a;
        this.f7965v = new LinkedHashMap();
    }

    public m(String str, int i5) {
        this.f7962d = i5;
        switch (i5) {
            case 9:
                m mVar = new m(8, false);
                this.f7964i = mVar;
                this.f7965v = mVar;
                this.f7963e = str;
                break;
            case 12:
                io.sentry.internal.debugmeta.c cVar = new io.sentry.internal.debugmeta.c(6, false);
                this.f7964i = cVar;
                this.f7965v = cVar;
                this.f7963e = str;
                break;
            case 20:
                e eVar = new e(9, false);
                this.f7964i = eVar;
                this.f7965v = eVar;
                this.f7963e = str;
                break;
            default:
                f0 f0Var = new f0();
                f0Var.k = str;
                this.f7963e = new Format(f0Var);
                break;
        }
    }

    public m(eh.b bVar, View view) {
        Object cVar;
        this.f7962d = 19;
        int i5 = Build.VERSION.SDK_INT;
        if (i5 >= 34) {
            cVar = new eh.e();
        } else {
            cVar = i5 >= 33 ? new eh.c() : null;
        }
        this.f7963e = cVar;
        this.f7964i = bVar;
        this.f7965v = view;
    }

    public m(FirebaseMessagingService firebaseMessagingService, gj.c cVar, ExecutorService executorService) {
        this.f7962d = 14;
        this.f7963e = executorService;
        this.f7964i = firebaseMessagingService;
        this.f7965v = cVar;
    }

    public m(File file) {
        this.f7962d = 29;
        this.f7963e = file;
        this.f7964i = new File(file.getPath() + ".new");
        this.f7965v = new File(file.getPath() + ".bak");
    }

    public m(ip.j classifierDescriptor, List arguments, m mVar) {
        this.f7962d = 27;
        Intrinsics.checkNotNullParameter(classifierDescriptor, "classifierDescriptor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        this.f7963e = classifierDescriptor;
        this.f7964i = arguments;
        this.f7965v = mVar;
    }

    public m(Context context, TypedArray typedArray) {
        this.f7962d = 4;
        this.f7963e = context;
        this.f7964i = typedArray;
    }

    public m(Context context, LocationManager locationManager) {
        this.f7962d = 24;
        this.f7965v = new i.g0();
        this.f7963e = context;
        this.f7964i = locationManager;
    }

    public m(IntRange argumentRange, List[] unboxParameters, Method method) {
        this.f7962d = 18;
        Intrinsics.checkNotNullParameter(argumentRange, "argumentRange");
        Intrinsics.checkNotNullParameter(unboxParameters, "unboxParameters");
        this.f7963e = argumentRange;
        this.f7964i = unboxParameters;
        this.f7965v = method;
    }

    public m(int i5, String str, ArrayList arrayList, byte[] bArr) {
        List unmodifiableList;
        this.f7962d = 3;
        this.f7963e = str;
        if (arrayList == null) {
            unmodifiableList = Collections.EMPTY_LIST;
        } else {
            unmodifiableList = Collections.unmodifiableList(arrayList);
        }
        this.f7964i = unmodifiableList;
        this.f7965v = bArr;
    }

    public m(MediaCodec mediaCodec) {
        this.f7962d = 11;
        this.f7963e = mediaCodec;
        if (d0.a < 21) {
            this.f7964i = mediaCodec.getInputBuffers();
            this.f7965v = mediaCodec.getOutputBuffers();
        }
    }

    public m(io.sentry.protocol.v vVar, k6 k6Var, io.sentry.c cVar) {
        this.f7962d = 25;
        this.f7963e = vVar;
        this.f7964i = k6Var;
        this.f7965v = io.sentry.config.a.n(cVar, null, null, null);
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public m(m mVar) {
        this((io.sentry.protocol.v) mVar.f7963e, (k6) mVar.f7964i, (io.sentry.c) mVar.f7965v);
        this.f7962d = 25;
    }

    public m(RNCWebViewModule rNCWebViewModule, String str, String str2) {
        this.f7962d = 15;
        this.f7965v = rNCWebViewModule;
        this.f7963e = str;
        this.f7964i = str2;
    }

    public m(jc.n[] nVarArr) {
        this.f7962d = 28;
        q0 q0Var = new q0();
        s0 s0Var = new s0();
        s0Var.f12641c = 1.0f;
        s0Var.f12642d = 1.0f;
        jc.l lVar = jc.l.f12572e;
        s0Var.f12643e = lVar;
        s0Var.f12644f = lVar;
        s0Var.f12645g = lVar;
        s0Var.f12646h = lVar;
        ByteBuffer byteBuffer = jc.n.a;
        s0Var.k = byteBuffer;
        s0Var.f12648l = byteBuffer.asShortBuffer();
        s0Var.f12649m = byteBuffer;
        s0Var.f12640b = -1;
        jc.n[] nVarArr2 = new jc.n[nVarArr.length + 2];
        this.f7963e = nVarArr2;
        System.arraycopy(nVarArr, 0, nVarArr2, 0, nVarArr.length);
        this.f7964i = q0Var;
        this.f7965v = s0Var;
        nVarArr2[nVarArr.length] = q0Var;
        nVarArr2[nVarArr.length + 1] = s0Var;
    }
}
