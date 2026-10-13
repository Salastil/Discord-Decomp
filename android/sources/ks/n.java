package ks;

import ad.d0;
import android.content.res.TypedArray;
import android.graphics.RectF;
import android.media.MediaDrm;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.view.View;
import androidx.core.view.x0;
import androidx.recyclerview.widget.RecyclerView;
import com.discord.R;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.UIManagerHelper;
import com.google.android.gms.common.api.Status;
import com.margelo.nitro.rive.ResolvedReferencedAsset;
import io.sentry.ILogger;
import io.sentry.f4;
import io.sentry.protocol.b0;
import io.sentry.protocol.h0;
import io.sentry.x1;
import ip.a0;
import ip.f0;
import ip.v;
import java.io.IOException;
import java.io.InputStream;
import java.net.URI;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeSet;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.TimeUnit;
import kotlin.Result;
import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import kotlin.text.StringsKt;
import lp.l0;
import lp.r0;
import lp.w;
import yq.y;
import yq.z0;

/* loaded from: classes3.dex */
public abstract class n {
    public static e4.i a;

    public static final double A(long j) {
        return ((j >>> 11) * RecyclerView.ItemAnimator.FLAG_MOVED) + (j & 2047);
    }

    public static final Exception a(p1.a aVar, String str, Exception exc) {
        if (exc instanceof q1.a) {
            return new q1.a(aVar, str);
        }
        if (exc instanceof q1.b) {
            return new q1.b(aVar, str);
        }
        throw new r1.a();
    }

    public static final void b(View view) {
        Intrinsics.checkNotNullParameter(view, "<this>");
        x0 block = new x0(view, null);
        Intrinsics.checkNotNullParameter(block, "block");
        kr.j a10 = kr.l.a(block);
        while (a10.hasNext()) {
            View view2 = (View) a10.next();
            c2.a aVar = (c2.a) view2.getTag(R.id.pooling_container_listener_holder_tag);
            if (aVar == null) {
                aVar = new c2.a();
                view2.setTag(R.id.pooling_container_listener_holder_tag, aVar);
            }
            ArrayList arrayList = aVar.a;
            int f2 = c0.f(arrayList);
            if (-1 < f2) {
                arrayList.get(f2).getClass();
                throw new ClassCastException();
            }
        }
    }

    public static final void c(int i5, String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        if (str.charAt(i5) == '-') {
            return;
        }
        StringBuilder r5 = a3.e.r(i5, "Expected '-' (hyphen) at index ", ", but was '");
        r5.append(str.charAt(i5));
        r5.append('\'');
        throw new IllegalArgumentException(r5.toString().toString());
    }

    public static e4.i d(e4.i iVar, ip.h containingDeclaration, op.n nVar, int i5) {
        if ((i5 & 2) != 0) {
            nVar = null;
        }
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(containingDeclaration, "containingDeclaration");
        return new e4.i((up.a) iVar.f7952d, nVar != null ? new d0(iVar, containingDeclaration, nVar, 0) : (up.e) iVar.f7953e, fo.l.b(fo.m.f8828i, new bs.q(12, iVar, containingDeclaration)));
    }

    public static final void e(AutoCloseable autoCloseable, Throwable th2) {
        boolean isTerminated;
        if (th2 != null) {
            try {
                s4.h.l(autoCloseable);
                return;
            } catch (Throwable th3) {
                fo.f.a(th2, th3);
                return;
            }
        }
        if (autoCloseable instanceof AutoCloseable) {
            autoCloseable.close();
            return;
        }
        if (!(autoCloseable instanceof ExecutorService)) {
            if (autoCloseable instanceof TypedArray) {
                ((TypedArray) autoCloseable).recycle();
                return;
            } else if (autoCloseable instanceof MediaMetadataRetriever) {
                ((MediaMetadataRetriever) autoCloseable).release();
                return;
            } else {
                if (!(autoCloseable instanceof MediaDrm)) {
                    throw new IllegalArgumentException();
                }
                ((MediaDrm) autoCloseable).release();
                return;
            }
        }
        ExecutorService executorService = (ExecutorService) autoCloseable;
        if (executorService == ForkJoinPool.commonPool() || (isTerminated = executorService.isTerminated())) {
            return;
        }
        executorService.shutdown();
        boolean z5 = false;
        while (!isTerminated) {
            try {
                isTerminated = executorService.awaitTermination(1L, TimeUnit.DAYS);
            } catch (InterruptedException unused) {
                if (!z5) {
                    executorService.shutdownNow();
                    z5 = true;
                }
            }
        }
        if (z5) {
            Thread.currentThread().interrupt();
        }
    }

    public static final jp.h f(jp.h first, jp.h second) {
        Intrinsics.checkNotNullParameter(first, "first");
        Intrinsics.checkNotNullParameter(second, "second");
        return first.isEmpty() ? second : second.isEmpty() ? first : new jp.i(new jp.h[]{first, second});
    }

    /* JADX WARN: Code restructure failed: missing block: B:33:0x00a7, code lost:
    
        if ((r4 instanceof lp.j0) == false) goto L36;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static String g(v descriptor, int i5) {
        String b10;
        boolean z5 = (i5 & 1) != 0;
        boolean z6 = (i5 & 2) != 0;
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        StringBuilder sb2 = new StringBuilder();
        if (z6) {
            if (descriptor instanceof ip.k) {
                b10 = "<init>";
            } else {
                b10 = ((lp.l) descriptor).getName().b();
                Intrinsics.checkNotNullExpressionValue(b10, "asString(...)");
            }
            sb2.append(b10);
        }
        sb2.append("(");
        lp.u W = descriptor.W();
        if (W != null) {
            y type = W.getType();
            Intrinsics.checkNotNullExpressionValue(type, "getType(...)");
            sb2.append(r(type));
        }
        Iterator it = descriptor.P().iterator();
        while (it.hasNext()) {
            y type2 = ((r0) it.next()).getType();
            Intrinsics.checkNotNullExpressionValue(type2, "getType(...)");
            sb2.append(r(type2));
        }
        sb2.append(")");
        if (z5) {
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            if (!(descriptor instanceof ip.k)) {
                y returnType = descriptor.getReturnType();
                Intrinsics.checkNotNull(returnType);
                if (returnType == null) {
                    fp.i.a(142);
                    throw null;
                }
                hq.e eVar = fp.i.f8859e;
                if (fp.i.E(returnType, fp.o.f8882d)) {
                    y returnType2 = descriptor.getReturnType();
                    Intrinsics.checkNotNull(returnType2);
                    if (!z0.e(returnType2)) {
                    }
                }
                y returnType3 = descriptor.getReturnType();
                Intrinsics.checkNotNull(returnType3);
                sb2.append(r(returnType3));
            }
            sb2.append("V");
        }
        return sb2.toString();
    }

    public static final String h(ip.b bVar) {
        Intrinsics.checkNotNullParameter(bVar, "<this>");
        if (!kq.e.o(bVar)) {
            ip.l h6 = bVar.h();
            ip.f fVar = h6 instanceof ip.f ? (ip.f) h6 : null;
            if (fVar != null && !fVar.getName().f10210e) {
                ip.b a10 = bVar.a();
                l0 l0Var = a10 instanceof l0 ? (l0) a10 : null;
                if (l0Var != null) {
                    return ki.b.Q(fVar, g(l0Var, 3));
                }
            }
        }
        return null;
    }

    public static final e4.i i(e4.i iVar, jp.h additionalAnnotations) {
        Intrinsics.checkNotNullParameter(iVar, "<this>");
        Intrinsics.checkNotNullParameter(additionalAnnotations, "additionalAnnotations");
        return additionalAnnotations.isEmpty() ? iVar : new e4.i((up.a) iVar.f7952d, (up.e) iVar.f7953e, fo.l.b(fo.m.f8828i, new bs.q(13, iVar, additionalAnnotations)));
    }

    public static WritableMap j(mm.b dataBuilder, int i5, int i6) {
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        WritableMap createMap = Arguments.createMap();
        dataBuilder.a(createMap);
        createMap.putInt("handlerTag", dataBuilder.a);
        createMap.putInt("state", i5);
        createMap.putInt("oldState", i6);
        return createMap;
    }

    public static boolean k(f4 f4Var, String str, x1 x1Var, ILogger iLogger) {
        int i5;
        int i6;
        int i10;
        i5 = 8;
        i6 = 2;
        i10 = 0;
        switch (str) {
            case "debug_meta":
                f4Var.K = (io.sentry.protocol.d) x1Var.d0(iLogger, new io.sentry.clientreport.a(i5));
                return true;
            case "server_name":
                f4Var.H = x1Var.l0();
                return true;
            case "contexts":
                f4Var.f11544e.l(io.sentry.clientreport.a.c(x1Var, iLogger));
                return true;
            case "environment":
                f4Var.f11549y = x1Var.l0();
                return true;
            case "breadcrumbs":
                f4Var.J = x1Var.Q(iLogger, new io.sentry.d(i10));
                return true;
            case "sdk":
                f4Var.f11545i = (io.sentry.protocol.t) x1Var.d0(iLogger, new io.sentry.clientreport.a(21));
                return true;
            case "dist":
                f4Var.I = x1Var.l0();
                return true;
            case "tags":
                f4Var.f11547w = ys.l.r((Map) x1Var.b0());
                return true;
            case "user":
                f4Var.F = (h0) x1Var.d0(iLogger, new b0(i6));
                return true;
            case "extra":
                f4Var.L = ys.l.r((Map) x1Var.b0());
                return true;
            case "event_id":
                f4Var.f11543d = (io.sentry.protocol.v) x1Var.d0(iLogger, new io.sentry.clientreport.a(23));
                return true;
            case "release":
                f4Var.f11548x = x1Var.l0();
                return true;
            case "request":
                f4Var.f11546v = (io.sentry.protocol.p) x1Var.d0(iLogger, new io.sentry.clientreport.a(19));
                return true;
            case "platform":
                f4Var.E = x1Var.l0();
                return true;
            default:
                return false;
        }
    }

    public static final void l(long j, byte[] dst, int i5, int i6, int i10) {
        Intrinsics.checkNotNullParameter(dst, "dst");
        Intrinsics.checkNotNullParameter(dst, "dst");
        int i11 = 7 - i6;
        int i12 = 8 - i10;
        if (i12 > i11) {
            return;
        }
        while (true) {
            int i13 = kotlin.text.d.a[(int) ((j >> (i11 << 3)) & 255)];
            int i14 = i5 + 1;
            dst[i5] = (byte) (i13 >> 8);
            i5 += 2;
            dst[i14] = (byte) i13;
            if (i11 == i12) {
                return;
            } else {
                i11--;
            }
        }
    }

    public static final e4.j m(e4.o oVar) {
        Intrinsics.checkNotNullParameter(oVar, "<this>");
        return new e4.j(oVar.a, oVar.f7983t);
    }

    public static c5.h n(c5.m mVar, List list) {
        c5.b cacheEntry = mVar.getCacheEntry();
        if (cacheEntry == null) {
            return new c5.h(null, true, list);
        }
        TreeSet treeSet = new TreeSet(String.CASE_INSENSITIVE_ORDER);
        if (!list.isEmpty()) {
            Iterator it = list.iterator();
            while (it.hasNext()) {
                treeSet.add(((c5.f) it.next()).a);
            }
        }
        ArrayList arrayList = new ArrayList(list);
        List list2 = cacheEntry.f3320h;
        if (list2 != null) {
            if (!list2.isEmpty()) {
                for (c5.f fVar : cacheEntry.f3320h) {
                    if (!treeSet.contains(fVar.a)) {
                        arrayList.add(fVar);
                    }
                }
            }
        } else if (!cacheEntry.f3319g.isEmpty()) {
            for (Map.Entry entry : cacheEntry.f3319g.entrySet()) {
                if (!treeSet.contains(entry.getKey())) {
                    arrayList.add(new c5.f((String) entry.getKey(), (String) entry.getValue()));
                }
            }
        }
        return new c5.h(cacheEntry.a, true, arrayList);
    }

    public static final ip.i o(ip.l lVar) {
        Intrinsics.checkNotNullParameter(lVar, "<this>");
        ip.l h6 = lVar.h();
        if (h6 == null || (lVar instanceof f0)) {
            return null;
        }
        Intrinsics.checkNotNullParameter(h6, "<this>");
        if (!(h6.h() instanceof f0)) {
            return o(h6);
        }
        if (h6 instanceof ip.i) {
            return (ip.i) h6;
        }
        return null;
    }

    public static int p(long j) {
        return (int) (j ^ (j >>> 32));
    }

    public static byte[] q(InputStream inputStream, int i5, d5.a aVar) {
        byte[] bArr;
        d5.e eVar = new d5.e(aVar, i5);
        try {
            bArr = aVar.a(IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET);
            while (true) {
                try {
                    int read = inputStream.read(bArr);
                    if (read == -1) {
                        break;
                    }
                    eVar.write(bArr, 0, read);
                } catch (Throwable th2) {
                    th = th2;
                    try {
                        inputStream.close();
                    } catch (IOException unused) {
                        c5.v.d("Error occurred when closing InputStream", new Object[0]);
                    }
                    aVar.b(bArr);
                    eVar.close();
                    throw th;
                }
            }
            byte[] byteArray = eVar.toByteArray();
            try {
                inputStream.close();
            } catch (IOException unused2) {
                c5.v.d("Error occurred when closing InputStream", new Object[0]);
            }
            aVar.b(bArr);
            eVar.close();
            return byteArray;
        } catch (Throwable th3) {
            th = th3;
            bArr = null;
        }
    }

    public static final aq.l r(y yVar) {
        Intrinsics.checkNotNullParameter(yVar, "<this>");
        return (aq.l) e4.f.C(yVar, aq.s.k, ir.e.f12259d);
    }

    public static final int s(wo.c cVar, IntRange range) {
        Intrinsics.checkNotNullParameter(cVar, "<this>");
        Intrinsics.checkNotNullParameter(range, "range");
        boolean isEmpty = range.isEmpty();
        int i5 = range.f13545d;
        if (isEmpty) {
            throw new IllegalArgumentException("Cannot get random in empty range: " + range);
        }
        int i6 = range.f13546e;
        if (i6 < Integer.MAX_VALUE) {
            cVar.getClass();
            return wo.d.f19973e.c(i5, i6 + 1);
        }
        if (i5 <= Integer.MIN_VALUE) {
            cVar.getClass();
            return wo.d.f19973e.b();
        }
        cVar.getClass();
        return wo.d.f19973e.c(i5 - 1, i6) + 1;
    }

    public static lm.d t(jm.f handler, int i5, int i6, int i10, mm.b dataBuilder, lm.a eventHandlerType) {
        Intrinsics.checkNotNullParameter(handler, "handler");
        Intrinsics.checkNotNullParameter(dataBuilder, "dataBuilder");
        Intrinsics.checkNotNullParameter(eventHandlerType, "eventHandlerType");
        lm.d dVar = (lm.d) lm.d.E.acquire();
        if (dVar == null) {
            dVar = new lm.d();
            dVar.f14105v = 2;
        }
        View r5 = handler.r();
        dVar.init(UIManagerHelper.getSurfaceId(r5), r5.getId());
        dVar.f14102d = dataBuilder;
        dVar.f14103e = i5;
        dVar.f14104i = i6;
        dVar.f14105v = i10;
        dVar.f14106w = eventHandlerType;
        return dVar;
    }

    public static com.margelo.nitro.rive.p u(ResolvedReferencedAsset asset) {
        Object i5;
        Intrinsics.checkNotNullParameter(asset, "asset");
        String sourceUrl = asset.getSourceUrl();
        if (sourceUrl != null) {
            return w(sourceUrl);
        }
        String sourceAssetId = asset.getSourceAssetId();
        if (sourceAssetId == null) {
            String nameWithExtension = asset.getSourceAsset();
            if (nameWithExtension == null) {
                return null;
            }
            Intrinsics.checkNotNullParameter(nameWithExtension, "nameWithExtension");
            return new com.margelo.nitro.rive.o(StringsKt.Z(nameWithExtension, nameWithExtension));
        }
        try {
            fo.q qVar = Result.f13476e;
            i5 = Uri.parse(sourceAssetId).getScheme();
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        return ((String) (i5 instanceof fo.r ? null : i5)) != null ? w(sourceAssetId) : new com.margelo.nitro.rive.o(sourceAssetId);
    }

    public static final ip.f v(a0 a0Var, hq.c fqName) {
        rq.o h0;
        qp.c lookupLocation = qp.c.f16937d;
        Intrinsics.checkNotNullParameter(a0Var, "<this>");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(lookupLocation, "lookupLocation");
        hq.d dVar = fqName.a;
        if (!dVar.c()) {
            ip.i a10 = ((w) a0Var.D(fqName.b())).E.a(dVar.f(), lookupLocation);
            ip.f fVar = a10 instanceof ip.f ? (ip.f) a10 : null;
            if (fVar != null) {
                return fVar;
            }
            ip.f v5 = v(a0Var, fqName.b());
            ip.i a11 = (v5 == null || (h0 = v5.h0()) == null) ? null : h0.a(dVar.f(), lookupLocation);
            if (a11 instanceof ip.f) {
                return (ip.f) a11;
            }
        }
        return null;
    }

    /* JADX WARN: Code restructure failed: missing block: B:16:?, code lost:
    
        return new com.margelo.nitro.rive.n(r4);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static com.margelo.nitro.rive.p w(String str) {
        Object i5;
        try {
            fo.q qVar = Result.f13476e;
            i5 = new URI(str);
        } catch (Throwable th2) {
            fo.q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        if (Result.a(i5) != null) {
            throw new com.margelo.nitro.rive.h(str);
        }
        URI uri = (URI) i5;
        String scheme = uri.getScheme();
        if (scheme != null) {
            int hashCode = scheme.hashCode();
            if (hashCode != 3143036) {
                if (hashCode != 3213448) {
                }
            } else if (scheme.equals("file")) {
                String path = uri.getPath();
                if (path != null) {
                    return new com.margelo.nitro.rive.m(path);
                }
                throw new com.margelo.nitro.rive.h(str);
            }
        }
        throw new com.margelo.nitro.rive.h(str);
    }

    public static void x(Status status, Object obj, jg.g gVar) {
        if (status.f5657d <= 0) {
            gVar.b(obj);
        } else {
            gVar.a(status.f5659i != null ? new qh.a(status) : new ze.e(status));
        }
    }

    public static final void y(Function2 function2, nr.a aVar, nr.a aVar2) {
        try {
            Continuation b10 = ko.f.b(ko.f.a(aVar, aVar2, function2));
            fo.q qVar = Result.f13476e;
            sr.h.f(Unit.a, b10);
        } catch (Throwable th2) {
            th = th2;
            if (th instanceof nr.c0) {
                th = ((nr.c0) th).f15600d;
            }
            fo.q qVar2 = Result.f13476e;
            aVar2.resumeWith(ki.b.i(th));
            throw th;
        }
    }

    public static RectF z(float[] fArr) {
        RectF rectF = new RectF(Float.POSITIVE_INFINITY, Float.POSITIVE_INFINITY, Float.NEGATIVE_INFINITY, Float.NEGATIVE_INFINITY);
        for (int i5 = 1; i5 < fArr.length; i5 += 2) {
            float round = Math.round(fArr[i5 - 1] * 10.0f) / 10.0f;
            float round2 = Math.round(fArr[i5] * 10.0f) / 10.0f;
            float f2 = rectF.left;
            if (round < f2) {
                f2 = round;
            }
            rectF.left = f2;
            float f10 = rectF.top;
            if (round2 < f10) {
                f10 = round2;
            }
            rectF.top = f10;
            float f11 = rectF.right;
            if (round <= f11) {
                round = f11;
            }
            rectF.right = round;
            float f12 = rectF.bottom;
            if (round2 <= f12) {
                round2 = f12;
            }
            rectF.bottom = round2;
        }
        rectF.sort();
        return rectF;
    }
}
