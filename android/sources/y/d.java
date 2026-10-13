package y;

import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kr.k;

/* loaded from: classes.dex */
public final class d extends lo.g implements Function2 {

    /* renamed from: e, reason: collision with root package name */
    public long[] f20571e;

    /* renamed from: i, reason: collision with root package name */
    public int f20572i;

    /* renamed from: v, reason: collision with root package name */
    public int f20573v;

    /* renamed from: w, reason: collision with root package name */
    public int f20574w;

    /* renamed from: x, reason: collision with root package name */
    public /* synthetic */ Object f20575x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ e f20576y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(e eVar, Continuation continuation) {
        super(2, continuation);
        this.f20576y = eVar;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        d dVar = new d(this.f20576y, continuation);
        dVar.f20575x = obj;
        return dVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((d) create((k) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x007e  */
    /* JADX WARN: Removed duplicated region for block: B:26:0x009c  */
    /* JADX WARN: Removed duplicated region for block: B:29:0x00a1  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x0079  */
    /* JADX WARN: Removed duplicated region for block: B:9:0x00a6  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:14:0x00c5 -> B:7:0x00c6). Please report as a decompilation issue!!! */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:23:0x0083 -> B:20:0x009a). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        k kVar;
        long[] jArr;
        int length;
        int i5;
        k kVar2;
        int i6;
        k kVar3;
        int i10;
        e eVar = this.f20576y;
        long j = eVar.f20578d;
        long j5 = eVar.f20580i;
        long j7 = eVar.f20579e;
        ko.a aVar = ko.a.f13464d;
        int i11 = this.f20574w;
        if (i11 == 0) {
            ki.b.R(obj);
            kVar = (k) this.f20575x;
            jArr = eVar.f20581v;
            if (jArr != null) {
                length = jArr.length;
                i5 = 0;
            }
            if (j7 != 0) {
                kVar2 = kVar;
                i6 = 0;
                if (i6 >= 64) {
                }
            }
            if (j != 0) {
            }
            return Unit.a;
        }
        if (i11 == 1) {
            length = this.f20573v;
            int i12 = this.f20572i;
            jArr = this.f20571e;
            kVar = (k) this.f20575x;
            ki.b.R(obj);
            i5 = i12 + 1;
        } else {
            if (i11 != 2) {
                if (i11 != 3) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                i10 = this.f20572i;
                kVar3 = (k) this.f20575x;
                ki.b.R(obj);
                i10++;
                if (i10 < 64) {
                    if (((1 << i10) & j) != 0) {
                        Long l6 = new Long(j5 + i10 + 64);
                        this.f20575x = kVar3;
                        this.f20571e = null;
                        this.f20572i = i10;
                        this.f20574w = 3;
                        kVar3.a(l6, this);
                        ko.a aVar2 = ko.a.f13464d;
                        return aVar;
                    }
                    i10++;
                    if (i10 < 64) {
                    }
                }
                return Unit.a;
            }
            i6 = this.f20572i;
            kVar2 = (k) this.f20575x;
            ki.b.R(obj);
            i6++;
            if (i6 >= 64) {
                kVar = kVar2;
                if (j != 0) {
                    kVar3 = kVar;
                    i10 = 0;
                    if (i10 < 64) {
                    }
                }
                return Unit.a;
            }
            if (((1 << i6) & j7) != 0) {
                Long l7 = new Long(j5 + i6);
                this.f20575x = kVar2;
                this.f20571e = null;
                this.f20572i = i6;
                this.f20574w = 2;
                kVar2.a(l7, this);
                ko.a aVar3 = ko.a.f13464d;
                return aVar;
            }
            i6++;
            if (i6 >= 64) {
            }
        }
        if (i5 < length) {
            Long l10 = new Long(jArr[i5]);
            this.f20575x = kVar;
            this.f20571e = jArr;
            this.f20572i = i5;
            this.f20573v = length;
            this.f20574w = 1;
            kVar.a(l10, this);
            return aVar;
        }
        if (j7 != 0) {
        }
        if (j != 0) {
        }
        return Unit.a;
    }
}
