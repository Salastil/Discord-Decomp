package com.swmansion.reanimated.keyboard;

import android.graphics.Bitmap;
import com.facebook.common.references.CloseableReference;
import com.facebook.imagepipeline.bitmaps.PlatformBitmapFactory;
import com.swmansion.gesturehandler.react.RNGestureHandlerModule;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.collections.d0;
import kotlin.collections.e1;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.IntRange;
import org.webrtc.SurfaceTextureHelper;
import org.webrtc.SurfaceViewRenderer;
import r9.d;
import yo.j;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6672d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f6673e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f6674i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ Object f6675v;

    public /* synthetic */ c(Object obj, int i5, int i6, int i10) {
        this.f6672d = i10;
        this.f6675v = obj;
        this.f6673e = i5;
        this.f6674i = i6;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int intValue;
        CloseableReference closeableReference;
        switch (this.f6672d) {
            case 0:
                ((WindowsInsetsManager) this.f6675v).lambda$updateInsets$1(this.f6673e, this.f6674i);
                return;
            case 1:
                ((RNGestureHandlerModule) this.f6675v).setGestureStateSync(this.f6673e, this.f6674i);
                return;
            case 2:
                ((SurfaceTextureHelper) this.f6675v).lambda$setTextureSize$2(this.f6673e, this.f6674i);
                return;
            case 3:
                ((SurfaceViewRenderer) this.f6675v).lambda$onFrameResolutionChanged$0(this.f6673e, this.f6674i);
                return;
            default:
                d this$0 = (d) this.f6675v;
                int i5 = this.f6673e;
                int i6 = this.f6674i;
                Intrinsics.checkNotNullParameter(this$0, "this$0");
                while (true) {
                    int i10 = this$0.j;
                    if (i10 < 0) {
                        i10 = 0;
                    }
                    p9.d dVar = this$0.f17165i;
                    int i11 = this$0.f17161e;
                    dVar.getClass();
                    IntRange i12 = j.i(0, i11);
                    ArrayList arrayList = new ArrayList(d0.l(i12, 10));
                    Iterator it = i12.iterator();
                    while (((yo.b) it).f20994i) {
                        arrayList.add(Integer.valueOf(dVar.l(((r0) it).nextInt() + i10)));
                    }
                    ArrayList arrayList2 = new ArrayList();
                    Iterator it2 = arrayList.iterator();
                    while (it2.hasNext()) {
                        Object next = it2.next();
                        if (this$0.f17166l.contains(Integer.valueOf(((Number) next).intValue()))) {
                            arrayList2.add(next);
                        }
                    }
                    Set l02 = CollectionsKt.l0(arrayList2);
                    Set keySet = this$0.f17162f.keySet();
                    Intrinsics.checkNotNullExpressionValue(keySet, "<get-keys>(...)");
                    ArrayDeque arrayDeque = new ArrayDeque(e1.c(keySet, l02));
                    Iterator it3 = arrayList2.iterator();
                    while (it3.hasNext()) {
                        int intValue2 = ((Number) it3.next()).intValue();
                        if (this$0.f17162f.get(Integer.valueOf(intValue2)) == null) {
                            int i13 = this$0.j;
                            if (i13 == -1 || l02.contains(Integer.valueOf(i13))) {
                                Integer num = (Integer) arrayDeque.pollFirst();
                                int intValue3 = num != null ? num.intValue() : -1;
                                r9.c cVar = (r9.c) this$0.f17162f.get(Integer.valueOf(intValue3));
                                CloseableReference f2 = (cVar == null || (closeableReference = cVar.a) == null) ? null : closeableReference.f();
                                if (f2 == null) {
                                    PlatformBitmapFactory platformBitmapFactory = this$0.a;
                                    platformBitmapFactory.getClass();
                                    CloseableReference a = platformBitmapFactory.a(i5, i6, Bitmap.Config.ARGB_8888);
                                    Intrinsics.checkNotNullExpressionValue(a, "createBitmap(...)");
                                    cVar = new r9.c(a);
                                    f2 = a.clone();
                                }
                                cVar.f17157b = true;
                                try {
                                    this$0.f(intValue2, f2);
                                    Unit unit = Unit.a;
                                    f2.close();
                                    this$0.f17162f.remove(Integer.valueOf(intValue3));
                                    cVar.f17157b = false;
                                    this$0.f17162f.put(Integer.valueOf(intValue2), cVar);
                                } finally {
                                }
                            }
                        }
                    }
                    if (arrayList2.isEmpty()) {
                        intValue = (int) (this$0.f17161e * 0.5f);
                    } else {
                        int size = arrayList2.size();
                        intValue = ((Number) arrayList2.get(j.d((int) (size * 0.5f), 0, size - 1))).intValue();
                    }
                    this$0.f17163g = intValue;
                    this$0.f17164h = false;
                    return;
                    break;
                }
                break;
        }
    }
}
