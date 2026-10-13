package com.facebook.react.uimanager;

import android.view.View;
import com.facebook.react.bridge.ReadableMap;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import com.swmansion.reanimated.layoutReanimation.SharedTransitionManager;
import fe.e;
import fe.f;
import fi.q0;
import fi.v;
import fi.x;
import ge.k;
import ge.n;
import he.l;
import i0.u;
import io.sentry.ISpan;
import java.io.File;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import xd.d;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f5048d;

    public /* synthetic */ a(int i5) {
        this.f5048d = i5;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        int COMPARATOR$lambda$0;
        int lambda$sortViewsByTags$0;
        boolean z5;
        switch (this.f5048d) {
            case 0:
                COMPARATOR$lambda$0 = ViewAtIndex.COMPARATOR$lambda$0((ViewAtIndex) obj, (ViewAtIndex) obj2);
                return COMPARATOR$lambda$0;
            case 1:
                lambda$sortViewsByTags$0 = SharedTransitionManager.lambda$sortViewsByTags$0((View) obj, (View) obj2);
                return lambda$sortViewsByTags$0;
            case 2:
                ReadableMap readableMap = (ReadableMap) obj;
                ReadableMap readableMap2 = (ReadableMap) obj2;
                return Double.compare(readableMap.hasKey("time") ? readableMap.getDouble("time") : 0.0d, readableMap2.hasKey("time") ? readableMap2.getDouble("time") : 0.0d);
            case 3:
                return Integer.compare(((f) obj).a.f8524b, ((f) obj2).a.f8524b);
            case 4:
                return Long.compare(((e) obj).f8520b, ((e) obj2).f8520b);
            case 5:
                return ((Format) obj2).E - ((Format) obj).E;
            case 6:
                Integer num = (Integer) obj;
                Integer num2 = (Integer) obj2;
                q0 q0Var = DefaultTrackSelector.k;
                if (num.intValue() == -1) {
                    return num2.intValue() == -1 ? 0 : -1;
                }
                if (num2.intValue() == -1) {
                    return 1;
                }
                return num.intValue() - num2.intValue();
            case 7:
                q0 q0Var2 = DefaultTrackSelector.k;
                return 0;
            case 8:
                List list = (List) obj;
                List list2 = (List) obj2;
                int i5 = 11;
                int i6 = 12;
                return v.f(n.c((n) Collections.max(list, new a(i5)), (n) Collections.max(list2, new a(i5)))).a(list.size(), list2.size()).b((n) Collections.max(list, new a(i6)), (n) Collections.max(list2, new a(i6)), new a(i6)).e();
            case 9:
                return ((ge.e) Collections.max((List) obj)).compareTo((ge.e) Collections.max((List) obj2));
            case 10:
                return ((k) ((List) obj).get(0)).compareTo((k) ((List) obj2).get(0));
            case 11:
                return n.c((n) obj, (n) obj2);
            case 12:
                n nVar = (n) obj;
                n nVar2 = (n) obj2;
                boolean z6 = nVar.f9197w;
                int i10 = nVar.F;
                q0 b10 = (z6 && nVar.E) ? DefaultTrackSelector.k : DefaultTrackSelector.k.b();
                return x.a.b(Integer.valueOf(i10), Integer.valueOf(nVar2.F), nVar.f9198x.T ? DefaultTrackSelector.k.b() : DefaultTrackSelector.f5456l).b(Integer.valueOf(nVar.G), Integer.valueOf(nVar2.G), b10).b(Integer.valueOf(i10), Integer.valueOf(nVar2.F), b10).e();
            case 13:
                l lVar = (l) obj;
                l lVar2 = (l) obj2;
                int compare = Integer.compare(lVar2.f9984b, lVar.f9984b);
                if (compare != 0) {
                    return compare;
                }
                int compareTo = lVar.f9985c.compareTo(lVar2.f9985c);
                return compareTo != 0 ? compareTo : lVar.f9986d.compareTo(lVar2.f9986d);
            case 14:
                l lVar3 = (l) obj;
                l lVar4 = (l) obj2;
                int compare2 = Integer.compare(lVar4.a, lVar3.a);
                if (compare2 != 0) {
                    return compare2;
                }
                int compareTo2 = lVar4.f9985c.compareTo(lVar3.f9985c);
                return compareTo2 != 0 ? compareTo2 : lVar4.f9986d.compareTo(lVar3.f9986d);
            case 15:
                u uVar = (u) obj;
                u uVar2 = (u) obj2;
                float f2 = uVar.f10415m.f10434i.K;
                float f10 = uVar2.f10415m.f10434i.K;
                return f2 == f10 ? Intrinsics.compare(uVar.e(), uVar2.e()) : Float.compare(f2, f10);
            case 16:
                byte[] bArr = (byte[]) obj;
                byte[] bArr2 = (byte[]) obj2;
                if (bArr.length != bArr2.length) {
                    return bArr.length - bArr2.length;
                }
                for (int i11 = 0; i11 < bArr.length; i11++) {
                    byte b11 = bArr[i11];
                    byte b12 = bArr2[i11];
                    if (b11 != b12) {
                        return b11 - b12;
                    }
                }
                return 0;
            case 17:
                return ((ie.q0) obj).a - ((ie.q0) obj2).a;
            case 18:
                return Float.compare(((ie.q0) obj).f10728c, ((ie.q0) obj2).f10728c);
            case 19:
                ISpan iSpan = (ISpan) obj;
                ISpan iSpan2 = (ISpan) obj2;
                if (iSpan == iSpan2) {
                    return 0;
                }
                int compareTo3 = iSpan.s().compareTo(iSpan2.s());
                return compareTo3 != 0 ? compareTo3 : iSpan.o().f11611e.toString().compareTo(iSpan2.o().f11611e.toString());
            case 20:
                return Long.compare(((File) obj).lastModified(), ((File) obj2).lastModified());
            case 21:
                jm.f fVar = (jm.f) obj;
                jm.f fVar2 = (jm.f) obj2;
                boolean z7 = fVar.L;
                if ((z7 && fVar2.L) || ((z5 = fVar.M) && fVar2.M)) {
                    return Integer.signum(fVar2.K - fVar.K);
                }
                if (z7) {
                    return -1;
                }
                if (!fVar2.L) {
                    if (z5) {
                        return -1;
                    }
                    if (!fVar2.M) {
                        return 0;
                    }
                }
                return 1;
            case 22:
                rd.b bVar = (rd.b) obj;
                rd.b bVar2 = (rd.b) obj2;
                int compare3 = Integer.compare(bVar.f17212c, bVar2.f17212c);
                return compare3 != 0 ? compare3 : bVar.f17211b.compareTo(bVar2.f17211b);
            default:
                return Integer.compare(((d) obj2).f20361b, ((d) obj).f20361b);
        }
    }
}
