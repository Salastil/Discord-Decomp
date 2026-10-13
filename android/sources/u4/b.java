package u4;

import android.content.Context;
import android.content.Intent;
import android.media.AudioAttributes;
import android.os.ResultReceiver;
import android.view.MenuItem;
import android.widget.EditText;
import androidx.activity.result.ActivityResultCallback;
import androidx.appcompat.widget.Toolbar;
import androidx.appcompat.widget.t3;
import androidx.core.view.MenuProvider;
import androidx.work.impl.WorkDatabase;
import aq.m;
import aq.n;
import bq.d;
import com.android.billingclient.api.ProxyBillingActivityV2;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.imagepipeline.producers.Consumer;
import com.facebook.imagepipeline.producers.ProducerContext;
import com.facebook.imagepipeline.producers.b1;
import com.facebook.imagepipeline.producers.g0;
import com.facebook.imagepipeline.request.ImageRequest;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.audio.AudioAttributes;
import com.google.android.gms.internal.play_billing.s;
import com.henninghall.date_picker.pickers.AndroidNative;
import e5.e;
import ha.l;
import i.e0;
import io.sentry.i1;
import io.sentry.protocol.a0;
import io.sentry.protocol.c0;
import io.sentry.r;
import io.sentry.u4;
import io.sentry.v5;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.nio.channels.FileChannel;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.ArrayList;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.concurrent.TimeUnit;
import java.util.jar.Attributes;
import java.util.jar.Manifest;
import ke.d0;
import ke.y;
import kotlin.jvm.internal.Intrinsics;
import mq.f;
import n.h;
import n.j;
import qa.p;

/* loaded from: classes.dex */
public final class b implements ActivityResultCallback, h, m, g0, e, ha.m, t3, i1, io.sentry.featureflags.b, hk.e, jt.b {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18809d;

    /* renamed from: e, reason: collision with root package name */
    public Object f18810e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f18809d = i5;
        this.f18810e = obj;
    }

    public static String e(String str, a aVar, boolean z5) {
        String str2 = aVar.f18808d;
        if (z5) {
            str2 = ".temp".concat(str2);
        }
        String replaceAll = str.replaceAll("\\W+", "");
        int length = 242 - str2.length();
        if (replaceAll.length() > length) {
            try {
                byte[] digest = MessageDigest.getInstance("MD5").digest(replaceAll.getBytes());
                StringBuilder sb2 = new StringBuilder();
                for (byte b10 : digest) {
                    sb2.append(String.format("%02x", Byte.valueOf(b10)));
                }
                replaceAll = sb2.toString();
            } catch (NoSuchAlgorithmException unused) {
                replaceAll = replaceAll.substring(0, length);
            }
        }
        return s4.h.f("lottie_cache_", replaceAll, str2);
    }

    @Override // aq.m
    public n B(hq.e eVar) {
        String b10 = eVar.b();
        if ("data".equals(b10) || "filePartClassNames".equals(b10)) {
            return new d(this, 0);
        }
        if ("strings".equals(b10)) {
            return new d(this, 1);
        }
        return null;
    }

    @Override // io.sentry.i1
    public boolean a() {
        if (io.sentry.internal.a.f11617c == null) {
            r a = io.sentry.internal.a.f11618d.a();
            try {
                if (io.sentry.internal.a.f11617c == null) {
                    io.sentry.internal.a.f11617c = new io.sentry.internal.a();
                }
                a.close();
            } catch (Throwable th2) {
                try {
                    a.close();
                } catch (Throwable th3) {
                    th2.addSuppressed(th3);
                }
                throw th2;
            }
        }
        io.sentry.internal.a aVar = io.sentry.internal.a.f11617c;
        if (!aVar.a) {
            try {
                r a10 = aVar.f11619b.a();
                try {
                    if (!aVar.a) {
                        Enumeration<URL> resources = ClassLoader.getSystemClassLoader().getResources("META-INF/MANIFEST.MF");
                        while (resources.hasMoreElements()) {
                            try {
                                Attributes mainAttributes = new Manifest(resources.nextElement().openStream()).getMainAttributes();
                                if (mainAttributes != null) {
                                    String value = mainAttributes.getValue("Sentry-Opentelemetry-SDK-Name");
                                    String value2 = mainAttributes.getValue("Implementation-Version");
                                    String value3 = mainAttributes.getValue("Sentry-SDK-Name");
                                    String value4 = mainAttributes.getValue("Sentry-SDK-Package-Name");
                                    if (value != null && value2 != null) {
                                        String value5 = mainAttributes.getValue("Sentry-Opentelemetry-Version-Name");
                                        if (value5 != null) {
                                            u4.d().b("maven:io.opentelemetry:opentelemetry-sdk", value5);
                                            u4.d().a("OpenTelemetry");
                                        }
                                        String value6 = mainAttributes.getValue("Sentry-Opentelemetry-Javaagent-Version-Name");
                                        if (value6 != null) {
                                            u4.d().b("maven:io.opentelemetry.javaagent:opentelemetry-javaagent", value6);
                                            u4.d().a("OpenTelemetry-Agent");
                                        }
                                        if (value.equals("sentry.java.opentelemetry.agentless")) {
                                            u4.d().a("OpenTelemetry-Agentless");
                                        }
                                        if (value.equals("sentry.java.opentelemetry.agentless-spring")) {
                                            u4.d().a("OpenTelemetry-Agentless-Spring");
                                        }
                                    }
                                    if (value3 != null && value2 != null && value4 != null && value3.startsWith("sentry.java")) {
                                        u4.d().b(value4, value2);
                                    }
                                }
                            } catch (Exception unused) {
                            }
                        }
                    }
                    a10.close();
                } finally {
                }
            } catch (IOException unused2) {
            } catch (Throwable th4) {
                aVar.a = true;
                throw th4;
            }
            aVar.a = true;
        }
        return u4.d().c(((v5) this.f18810e).getFatalLogger());
    }

    @Override // com.facebook.imagepipeline.producers.g0
    public void b(EncodedImage encodedImage, int i5) {
        b1 b1Var = (b1) this.f18810e;
        Consumer consumer = b1Var.f4801b;
        if (encodedImage == null) {
            consumer.b(i5, null);
            return;
        }
        ua.a createImageTranscoder = b1Var.f4702d.createImageTranscoder(encodedImage.getImageFormat(), b1Var.f4701c);
        createImageTranscoder.getClass();
        ProducerContext producerContext = b1Var.f4703e;
        producerContext.C().c(producerContext, "ResizeAndRotateProducer");
        ImageRequest g6 = producerContext.g();
        e4.c cVar = b1Var.f4706h.f4710b;
        cVar.getClass();
        p pVar = (p) cVar.f7939e;
        qa.r rVar = new qa.r(pVar, pVar.G[0]);
        try {
            try {
                p9.d b10 = createImageTranscoder.b(encodedImage, rVar, g6.getRotationOptions(), g6.getResizeOptions(), encodedImage.getColorSpace());
                int i6 = b10.f16329e;
                if (i6 == 2) {
                    throw new RuntimeException("Error while transcoding the image");
                }
                o8.e l6 = b1Var.l(encodedImage, g6.getResizeOptions(), b10, createImageTranscoder.a());
                s8.b A = CloseableReference.A(rVar.f());
                try {
                    EncodedImage encodedImage2 = new EncodedImage(A);
                    encodedImage2.setImageFormat(aa.b.a);
                    try {
                        encodedImage2.parseMetaData();
                        producerContext.C().i(producerContext, "ResizeAndRotateProducer", l6);
                        if (i6 != 1) {
                            i5 |= 16;
                        }
                        consumer.b(i5, encodedImage2);
                        rVar.close();
                    } finally {
                        EncodedImage.closeSafely(encodedImage2);
                    }
                } finally {
                    CloseableReference.l(A);
                }
            } catch (Exception e9) {
                producerContext.C().k(producerContext, "ResizeAndRotateProducer", e9, null);
                if (com.facebook.imagepipeline.producers.c.d(i5)) {
                    consumer.onFailure(e9);
                }
                rVar.close();
            }
        } catch (Throwable th2) {
            rVar.close();
            throw th2;
        }
    }

    @Override // ha.m
    public int c(Object obj) {
        return ((ha.m) this.f18810e).c(((ha.d) obj).f9601b.q());
    }

    @Override // io.sentry.featureflags.b
    /* renamed from: clone */
    public io.sentry.featureflags.b m1291clone() {
        return new b(19);
    }

    @Override // jt.b
    public FileChannel d() {
        return new FileInputStream((File) this.f18810e).getChannel();
    }

    @Override // androidx.activity.result.ActivityResultCallback
    public void f(Object obj) {
        ProxyBillingActivityV2 proxyBillingActivityV2 = (ProxyBillingActivityV2) this.f18810e;
        f.a aVar = (f.a) obj;
        proxyBillingActivityV2.getClass();
        Intent intent = aVar.f8287e;
        int i5 = s.e(intent, "ProxyBillingActivityV2").a;
        ResultReceiver resultReceiver = proxyBillingActivityV2.F;
        if (resultReceiver != null) {
            resultReceiver.send(i5, intent == null ? null : intent.getExtras());
        }
        int i6 = aVar.f8286d;
        if (i6 != -1 || i5 != 0) {
            s.h("ProxyBillingActivityV2", "External offer dialog finished with resultCode: " + i6 + " and billing's responseCode: " + i5);
        }
        proxyBillingActivityV2.finish();
    }

    public File g(String str) {
        File file = new File(n(), e(str, a.JSON, false));
        if (file.exists()) {
            return file;
        }
        File file2 = new File(n(), e(str, a.ZIP, false));
        if (file2.exists()) {
            return file2;
        }
        File file3 = new File(n(), e(str, a.GZIP, false));
        if (file3.exists()) {
            return file3;
        }
        return null;
    }

    @Override // io.sentry.featureflags.b
    public io.sentry.protocol.h h() {
        ((io.sentry.util.a) this.f18810e).a().close();
        return null;
    }

    @Override // n.h
    public boolean i(j jVar, MenuItem menuItem) {
        return false;
    }

    @Override // aq.m
    public m k(hq.b bVar, hq.e eVar) {
        return null;
    }

    public ArrayList l(Map map, ArrayList arrayList, boolean z5, boolean z6) {
        ArrayList T;
        Thread currentThread = Thread.currentThread();
        if (map.isEmpty()) {
            return null;
        }
        ArrayList arrayList2 = new ArrayList();
        if (!map.containsKey(currentThread)) {
            map.put(currentThread, currentThread.getStackTrace());
        }
        for (Map.Entry entry : map.entrySet()) {
            Thread thread = (Thread) entry.getKey();
            boolean z7 = (thread == currentThread && !z5) || !(arrayList == null || !arrayList.contains(Long.valueOf(thread.getId())) || z5);
            StackTraceElement[] stackTraceElementArr = (StackTraceElement[]) entry.getValue();
            Thread thread2 = (Thread) entry.getKey();
            c0 c0Var = new c0();
            c0Var.f11767i = thread2.getName();
            c0Var.f11766e = Integer.valueOf(thread2.getPriority());
            c0Var.f11765d = Long.valueOf(thread2.getId());
            c0Var.f11771y = Boolean.valueOf(thread2.isDaemon());
            c0Var.f11768v = thread2.getState().name();
            c0Var.f11769w = Boolean.valueOf(z7);
            if (z6 && (T = ((l) this.f18810e).T(stackTraceElementArr, false)) != null && !T.isEmpty()) {
                a0 a0Var = new a0(T);
                a0Var.f11757i = Boolean.TRUE;
                c0Var.F = a0Var;
            }
            arrayList2.add(c0Var);
        }
        return arrayList2;
    }

    public void m(Object obj, boolean z5) {
        CacheKey cacheKey = (CacheKey) obj;
        com.google.firebase.messaging.r rVar = (com.google.firebase.messaging.r) this.f18810e;
        synchronized (rVar) {
            try {
                if (z5) {
                    ((LinkedHashSet) rVar.f6262w).add(cacheKey);
                } else {
                    ((LinkedHashSet) rVar.f6262w).remove(cacheKey);
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public File n() {
        File file = new File(((com.discord.chat.input.views.d) this.f18810e).f3873e.getCacheDir(), "lottie_network_cache");
        if (file.isFile()) {
            file.delete();
        }
        if (!file.exists()) {
            file.mkdirs();
        }
        return file;
    }

    public File o(String str, InputStream inputStream, a aVar) {
        File file = new File(n(), e(str, aVar, true));
        try {
            FileOutputStream fileOutputStream = new FileOutputStream(file);
            try {
                byte[] bArr = new byte[IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET];
                while (true) {
                    int read = inputStream.read(bArr);
                    if (read == -1) {
                        fileOutputStream.flush();
                        fileOutputStream.close();
                        return file;
                    }
                    fileOutputStream.write(bArr, 0, read);
                }
            } catch (Throwable th2) {
                fileOutputStream.close();
                throw th2;
            }
        } finally {
            inputStream.close();
        }
    }

    @Override // androidx.appcompat.widget.t3
    public boolean onMenuItemClick(MenuItem menuItem) {
        return ((e0) this.f18810e).f10303b.onMenuItemSelected(0, menuItem);
    }

    @Override // n.h
    public void v(j jVar) {
        Toolbar toolbar = (Toolbar) this.f18810e;
        androidx.appcompat.widget.n nVar = toolbar.f883d.Q;
        if (nVar == null || !nVar.m()) {
            Iterator it = toolbar.f888g0.f1540b.iterator();
            while (it.hasNext()) {
                ((MenuProvider) it.next()).d(jVar);
            }
        }
        c cVar = toolbar.f896o0;
        if (cVar != null) {
            cVar.v(jVar);
        }
    }

    @Override // aq.m
    public void x(hq.e eVar, Object obj) {
        bq.e eVar2 = (bq.e) this.f18810e;
        String b10 = eVar.b();
        if ("version".equals(b10)) {
            if (obj instanceof int[]) {
                eVar2.f3148d = (int[]) obj;
            }
        } else if ("multifileClassName".equals(b10)) {
            eVar2.f3149e = obj instanceof String ? (String) obj : null;
        }
    }

    public b(ReactApplicationContext reactApplicationContext) {
        this.f18809d = 9;
        cd.c cVar = new cd.c(reactApplicationContext);
        this.f18810e = new ie.s((Context) cVar.f3409i, (HashMap) cVar.f3410v, cVar.f3407d, (y) cVar.f3411w, cVar.f3408e);
    }

    /* renamed from: clone, reason: collision with other method in class */
    public Object m1303clone() {
        switch (this.f18809d) {
            case 19:
                return new b(19);
            default:
                return super.clone();
        }
    }

    public b(WorkDatabase workDatabase) {
        this.f18809d = 10;
        Intrinsics.checkNotNullParameter(workDatabase, "workDatabase");
        this.f18810e = workDatabase;
    }

    public b(int i5) {
        this.f18809d = i5;
        switch (i5) {
            case 12:
                this.f18810e = null;
                break;
            case 16:
                this.f18810e = new CopyOnWriteArrayList();
                break;
            case 19:
                this.f18810e = new io.sentry.util.a();
                break;
            case 29:
                TimeUnit timeUnit = TimeUnit.MINUTES;
                Intrinsics.checkNotNullParameter(timeUnit, "timeUnit");
                ts.l delegate = new ts.l(ss.c.f18141h);
                Intrinsics.checkNotNullParameter(delegate, "delegate");
                this.f18810e = delegate;
                break;
        }
    }

    public b(AudioAttributes audioAttributes) {
        this.f18809d = 20;
        AudioAttributes.Builder usage = new AudioAttributes.Builder().setContentType(audioAttributes.f5337d).setFlags(audioAttributes.f5338e).setUsage(audioAttributes.f5339i);
        int i5 = d0.a;
        if (i5 >= 29) {
            jc.b.a(usage, audioAttributes.f5340v);
        }
        if (i5 >= 32) {
            jc.c.a(usage, audioAttributes.f5341w);
        }
        this.f18810e = usage.build();
    }

    @Override // aq.m
    public void j() {
    }

    public b(ha.h hVar, ha.m mVar) {
        this.f18809d = 13;
        this.f18810e = mVar;
    }

    public b(EditText editText) {
        this.f18809d = 25;
        this.f18810e = new e4.r(editText);
    }

    public b(AndroidNative androidNative, AndroidNative androidNative2) {
        this.f18809d = 21;
        this.f18810e = androidNative;
    }

    @Override // aq.m
    public void G(hq.e eVar, f fVar) {
    }

    @Override // aq.m
    public void J(hq.e eVar, hq.b bVar, hq.e eVar2) {
    }
}
