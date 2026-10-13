package rr;

import java.util.concurrent.atomic.AtomicInteger;
import kotlin.Unit;
import kotlin.collections.IndexedValue;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.channels.Channel;
import kotlinx.coroutines.flow.Flow;
import kotlinx.coroutines.flow.FlowCollector;

/* loaded from: classes3.dex */
public final class p extends lo.h implements Function2 {
    public final /* synthetic */ a3.q E;
    public final /* synthetic */ a4.g F;
    public final /* synthetic */ FlowCollector G;

    /* renamed from: d, reason: collision with root package name */
    public Channel f17609d;

    /* renamed from: e, reason: collision with root package name */
    public byte[] f17610e;

    /* renamed from: i, reason: collision with root package name */
    public int f17611i;

    /* renamed from: v, reason: collision with root package name */
    public int f17612v;

    /* renamed from: w, reason: collision with root package name */
    public int f17613w;

    /* renamed from: x, reason: collision with root package name */
    public /* synthetic */ Object f17614x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Flow[] f17615y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public p(Flow[] flowArr, a3.q qVar, a4.g gVar, FlowCollector flowCollector, Continuation continuation) {
        super(2, continuation);
        this.f17615y = flowArr;
        this.E = qVar;
        this.F = gVar;
        this.G = flowCollector;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        p pVar = new p(this.f17615y, this.E, this.F, this.G, continuation);
        pVar.f17614x = obj;
        return pVar;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return ((p) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x008a, code lost:
    
        if (r11 == r2) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:27:0x00db, code lost:
    
        if (r17.F.invoke(r17.G, r11, r17) == r2) goto L38;
     */
    /* JADX WARN: Code restructure failed: missing block: B:29:0x0078, code lost:
    
        if (r7 != 0) goto L21;
     */
    /* JADX WARN: Code restructure failed: missing block: B:30:0x00dd, code lost:
    
        return r2;
     */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:26:0x00db -> B:11:0x0078). Please report as a decompilation issue!!! */
    @Override // lo.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object invokeSuspend(Object obj) {
        int length;
        Object[] objArr;
        byte[] bArr;
        int i5;
        Channel channel;
        Object obj2;
        a5.h hVar = c.f17578c;
        ko.a aVar = ko.a.f13464d;
        int i6 = this.f17613w;
        if (i6 == 0) {
            ki.b.R(obj);
            CoroutineScope coroutineScope = (CoroutineScope) this.f17614x;
            length = this.f17615y.length;
            if (length == 0) {
                return Unit.a;
            }
            objArr = new Object[length];
            kotlin.collections.u.k(objArr, hVar, 0, length);
            pr.h a = zk.a.a(length, 6, null);
            AtomicInteger atomicInteger = new AtomicInteger(length);
            for (int i10 = 0; i10 < length; i10++) {
                nr.x.t(coroutineScope, null, new o(this.f17615y, i10, atomicInteger, a, null), 3);
            }
            bArr = new byte[length];
            i5 = 0;
            channel = a;
        } else if (i6 == 1) {
            i5 = this.f17612v;
            length = this.f17611i;
            bArr = this.f17610e;
            channel = this.f17609d;
            objArr = (Object[]) this.f17614x;
            ki.b.R(obj);
            obj2 = ((pr.n) obj).a;
            IndexedValue indexedValue = (IndexedValue) pr.n.a(obj2);
            if (indexedValue == null) {
                return Unit.a;
            }
            while (true) {
                int i11 = indexedValue.a;
                Object obj3 = objArr[i11];
                objArr[i11] = indexedValue.f13483b;
                if (obj3 == hVar) {
                    length--;
                }
                if (bArr[i11] != i5) {
                    bArr[i11] = (byte) i5;
                    indexedValue = (IndexedValue) pr.n.a(channel.g());
                    if (indexedValue != null) {
                    }
                }
                if (length == 0) {
                    a4.c[] cVarArr = new a4.c[((Flow[]) this.E.f99e).length];
                    kotlin.collections.u.g(0, 0, 14, objArr, cVarArr);
                    this.f17614x = objArr;
                    this.f17609d = channel;
                    this.f17610e = bArr;
                    this.f17611i = length;
                    this.f17612v = i5;
                    this.f17613w = 3;
                }
            }
        } else {
            if (i6 != 2 && i6 != 3) {
                throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
            }
            i5 = this.f17612v;
            length = this.f17611i;
            bArr = this.f17610e;
            channel = this.f17609d;
            objArr = (Object[]) this.f17614x;
            ki.b.R(obj);
        }
        i5 = (byte) (i5 + 1);
        this.f17614x = objArr;
        this.f17609d = channel;
        this.f17610e = bArr;
        this.f17611i = length;
        this.f17612v = i5;
        this.f17613w = 1;
        obj2 = channel.a(this);
    }
}
