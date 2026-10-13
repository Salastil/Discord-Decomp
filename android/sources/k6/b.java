package k6;

import android.graphics.Canvas;
import com.discord.chat.presentation.message.messagepart.VideoAttachmentMessageAccessory;
import com.discord.chat.presentation.message.view.mosaic_recycler.AttachmentMediaMosaicAdapter;
import com.discord.qr.scanner.QRScanner;
import com.discord.qr.scanner.QRScannerViewManager;
import com.discord.react_rootview.ReactRootView;
import com.discord.react_rootview.ReactSurfaceView;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.Executor;
import jc.b0;
import jm.f;
import km.k;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;
import kotlin.text.Regex;
import kotlin.text.n;
import kotlinx.serialization.SealedClassSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import n1.c;
import n1.q;
import o1.o;
import u1.d;
import v1.h;
import w1.e;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13194d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f13195e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f13196i;

    public /* synthetic */ b(int i5, Object obj, Object obj2) {
        this.f13194d = i5;
        this.f13195e = obj;
        this.f13196i = obj2;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit onBindViewHolder$lambda$6;
        Collection values;
        Unit createViewInstance$lambda$2$lambda$1;
        Unit dispatchDraw$lambda$0;
        Unit dispatchDraw$lambda$02;
        int i5 = 0;
        List list = null;
        Executor executor = null;
        Executor executor2 = null;
        Executor executor3 = null;
        list = null;
        switch (this.f13194d) {
            case 0:
                onBindViewHolder$lambda$6 = AttachmentMediaMosaicAdapter.onBindViewHolder$lambda$6((AttachmentMediaMosaicAdapter) this.f13195e, (VideoAttachmentMessageAccessory) this.f13196i);
                return onBindViewHolder$lambda$6;
            case 1:
                k kVar = (k) this.f13195e;
                f fVar = (f) this.f13196i;
                synchronized (kVar) {
                    try {
                        Map map = (Map) kVar.f13441d.get(Integer.valueOf(fVar.f12874d));
                        if (map != null && (values = map.values()) != null) {
                            list = CollectionsKt.i0(values);
                        }
                        if (list == null) {
                            list = m0.f13512d;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                Iterator it = list.iterator();
                while (it.hasNext()) {
                    ((Function1) it.next()).invoke(fVar);
                }
                return Unit.a;
            case 2:
                Regex regex = (Regex) this.f13195e;
                String str = (String) this.f13196i;
                n nVar = Regex.f13559e;
                return regex.b(str);
            case 3:
                createViewInstance$lambda$2$lambda$1 = QRScannerViewManager.createViewInstance$lambda$2$lambda$1((QRScannerViewManager) this.f13195e, (QRScanner) this.f13196i);
                return createViewInstance$lambda$2$lambda$1;
            case 4:
                dispatchDraw$lambda$0 = ReactRootView.dispatchDraw$lambda$0((ReactRootView) this.f13195e, (Canvas) this.f13196i);
                return dispatchDraw$lambda$0;
            case 5:
                dispatchDraw$lambda$02 = ReactSurfaceView.dispatchDraw$lambda$0((ReactSurfaceView) this.f13195e, (Canvas) this.f13196i);
                return dispatchDraw$lambda$02;
            case 6:
                d dVar = (d) this.f13195e;
                dVar.g().execute(new b0(22, dVar, (q) this.f13196i));
                return Unit.a;
            case 7:
                d dVar2 = (d) this.f13195e;
                dVar2.g().execute(new b0(20, dVar2, (Ref.ObjectRef) this.f13196i));
                return Unit.a;
            case 8:
                d dVar3 = (d) this.f13195e;
                dVar3.g().execute(new b0(21, dVar3, (o) this.f13196i));
                return Unit.a;
            case 9:
                h hVar = (h) this.f13195e;
                n1.f fVar2 = (n1.f) this.f13196i;
                Executor executor4 = hVar.f19170g;
                if (executor4 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                } else {
                    executor3 = executor4;
                }
                executor3.execute(new b0(24, hVar, fVar2));
                return Unit.a;
            case 10:
                e eVar = (e) this.f13195e;
                c cVar = (c) this.f13196i;
                Executor executor5 = eVar.f19617g;
                if (executor5 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                } else {
                    executor2 = executor5;
                }
                executor2.execute(new b0(26, eVar, cVar));
                return Unit.a;
            case 11:
                e eVar2 = (e) this.f13195e;
                o1.d dVar4 = (o1.d) this.f13196i;
                Executor executor6 = eVar2.f19617g;
                if (executor6 == null) {
                    Intrinsics.throwUninitializedPropertyAccessException("executor");
                } else {
                    executor = executor6;
                }
                executor.execute(new w1.a(eVar2, dVar4, 0));
                return Unit.a;
            default:
                return com.facebook.imagepipeline.nativecode.c.g((String) this.f13195e, zr.c.f21414u, new SerialDescriptor[0], new xr.d((SealedClassSerializer) this.f13196i, i5));
        }
    }
}
