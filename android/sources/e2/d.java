package e2;

import androidx.lifecycle.g0;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.margelo.nitro.rive.p0;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.UUID;
import kotlin.Unit;
import kotlin.collections.d0;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.coroutines.Continuation;
import kotlin.jvm.functions.Function2;
import kotlin.ranges.IntRange;
import kotlinx.coroutines.CoroutineScope;
import kotlinx.coroutines.Deferred;

/* loaded from: classes.dex */
public final class d extends lo.h implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7842d = 0;

    /* renamed from: e, reason: collision with root package name */
    public int f7843e;

    /* renamed from: i, reason: collision with root package name */
    public Object f7844i;

    /* renamed from: v, reason: collision with root package name */
    public Object f7845v;

    /* renamed from: w, reason: collision with root package name */
    public /* synthetic */ Object f7846w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f7847x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Object f7848y;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(List list, ArrayList arrayList, Continuation continuation) {
        super(2, continuation);
        this.f7847x = list;
        this.f7848y = arrayList;
    }

    @Override // lo.a
    public final Continuation create(Object obj, Continuation continuation) {
        switch (this.f7842d) {
            case 0:
                d dVar = new d((List) this.f7847x, (ArrayList) this.f7848y, continuation);
                dVar.f7846w = obj;
                return dVar;
            default:
                d dVar2 = new d((pl.c) this.f7845v, (ReactContext) this.f7846w, (pl.a) this.f7847x, (ReadableArray) this.f7848y, continuation);
                dVar2.f7844i = obj;
                return dVar2;
        }
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        switch (this.f7842d) {
            case 0:
                return ((d) create(obj, (Continuation) obj2)).invokeSuspend(Unit.a);
            default:
                return ((d) create((CoroutineScope) obj, (Continuation) obj2)).invokeSuspend(Unit.a);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v11, types: [ko.a] */
    /* JADX WARN: Type inference failed for: r0v14 */
    /* JADX WARN: Type inference failed for: r0v15, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r0v16, types: [com.facebook.react.bridge.WritableArray] */
    /* JADX WARN: Type inference failed for: r0v19 */
    @Override // lo.a
    public final Object invokeSuspend(Object obj) {
        List list;
        Iterator it;
        int i5 = this.f7842d;
        Object obj2 = this.f7847x;
        Object obj3 = this.f7848y;
        switch (i5) {
            case 0:
                ko.a aVar = ko.a.f13464d;
                int i6 = this.f7843e;
                if (i6 == 0) {
                    ki.b.R(obj);
                    obj = this.f7846w;
                    Iterator it2 = ((List) obj2).iterator();
                    list = (ArrayList) obj3;
                    it = it2;
                } else if (i6 == 1) {
                    Object obj4 = this.f7844i;
                    Iterator it3 = (Iterator) this.f7845v;
                    List list2 = (List) this.f7846w;
                    ki.b.R(obj);
                    if (((Boolean) obj).booleanValue()) {
                        list2.add(new p0(1, null, 1));
                        this.f7846w = list2;
                        this.f7845v = it3;
                        this.f7844i = null;
                        this.f7843e = 2;
                        throw null;
                    }
                    obj = obj4;
                    it = it3;
                    list = list2;
                } else {
                    if (i6 != 2) {
                        throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                    }
                    it = (Iterator) this.f7845v;
                    list = (List) this.f7846w;
                    ki.b.R(obj);
                }
                if (!it.hasNext()) {
                    return obj;
                }
                if (it.next() != null) {
                    throw new ClassCastException();
                }
                this.f7846w = list;
                this.f7845v = it;
                this.f7844i = obj;
                this.f7843e = 1;
                throw null;
            default:
                ReadableArray readableArray = (ReadableArray) obj3;
                ?? r02 = ko.a.f13464d;
                int i10 = this.f7843e;
                if (i10 == 0) {
                    ki.b.R(obj);
                    CoroutineScope coroutineScope = (CoroutineScope) this.f7844i;
                    ReactContext reactContext = (ReactContext) this.f7846w;
                    File file = new File(((pl.a) obj2) == pl.a.f16426v ? reactContext.getFilesDir() : reactContext.getCacheDir(), UUID.randomUUID().toString());
                    if (!file.mkdir()) {
                        throw new IOException(a3.e.k("Failed to create directory at ", file.getAbsolutePath()));
                    }
                    IntRange i11 = yo.j.i(0, readableArray.size());
                    pl.c cVar = (pl.c) this.f7845v;
                    ReactContext reactContext2 = (ReactContext) this.f7846w;
                    ArrayList arrayList = new ArrayList(d0.l(i11, 10));
                    Iterator it4 = i11.iterator();
                    while (((yo.b) it4).f20994i) {
                        arrayList.add(nr.x.d(coroutineScope, null, new g0(readableArray, ((r0) it4).nextInt(), cVar, reactContext2, file, (Continuation) null), 3));
                    }
                    WritableArray createArray = Arguments.createArray();
                    this.f7844i = createArray;
                    this.f7843e = 1;
                    Object a = arrayList.isEmpty() ? m0.f13512d : new nr.e((Deferred[]) arrayList.toArray(new Deferred[0])).a(this);
                    if (a != r02) {
                        r02 = createArray;
                        obj = a;
                    }
                    return r02;
                }
                if (i10 != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                WritableArray writableArray = (WritableArray) this.f7844i;
                ki.b.R(obj);
                r02 = writableArray;
                Iterator it5 = ((Iterable) obj).iterator();
                while (it5.hasNext()) {
                    r02.pushMap((WritableMap) it5.next());
                }
                return r02;
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public d(pl.c cVar, ReactContext reactContext, pl.a aVar, ReadableArray readableArray, Continuation continuation) {
        super(2, continuation);
        this.f7845v = cVar;
        this.f7846w = reactContext;
        this.f7847x = aVar;
        this.f7848y = readableArray;
    }
}
