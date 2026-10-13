package ds;

import bs.h1;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.collections.e1;
import kotlin.collections.o0;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonObject;

/* loaded from: classes3.dex */
public class v extends b {

    /* renamed from: g, reason: collision with root package name */
    public final JsonObject f7742g;

    /* renamed from: h, reason: collision with root package name */
    public final SerialDescriptor f7743h;

    /* renamed from: i, reason: collision with root package name */
    public int f7744i;
    public boolean j;

    public /* synthetic */ v(Json json, JsonObject jsonObject, String str, int i5) {
        this(json, jsonObject, (i5 & 4) != 0 ? null : str, (SerialDescriptor) null);
    }

    @Override // ds.b
    /* renamed from: C, reason: merged with bridge method [inline-methods] */
    public JsonObject z() {
        return this.f7742g;
    }

    @Override // ds.b, kotlinx.serialization.encoding.Decoder
    public final CompositeDecoder beginStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        SerialDescriptor serialDescriptor = this.f7743h;
        if (descriptor != serialDescriptor) {
            return super.beginStructure(descriptor);
        }
        JsonElement y5 = y();
        String a = serialDescriptor.a();
        if (y5 instanceof JsonObject) {
            return new v(this.f7699d, (JsonObject) y5, this.f7700e, serialDescriptor);
        }
        throw s.d(-1, y5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonObject.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(y5.getClass()).getSimpleName() + " as the serialized body of " + a + " at element: " + w());
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        while (this.f7744i < descriptor.f()) {
            int i5 = this.f7744i;
            this.f7744i = i5 + 1;
            String t5 = t(descriptor, i5);
            int i6 = this.f7744i - 1;
            this.j = false;
            if (!z().containsKey(t5)) {
                boolean z5 = (this.f7699d.a.f1129e || descriptor.j(i6) || !descriptor.i(i6).d()) ? false : true;
                this.j = z5;
                if (z5) {
                }
            }
            this.f7701f.getClass();
            return i6;
        }
        return -1;
    }

    @Override // ds.b, bs.a1, kotlinx.serialization.encoding.Decoder
    public final boolean decodeNotNullMark() {
        return !this.j && super.decodeNotNullMark();
    }

    @Override // ds.b, bs.a1, kotlinx.serialization.encoding.CompositeDecoder
    public void endStructure(SerialDescriptor descriptor) {
        Set d6;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        androidx.appcompat.widget.v vVar = this.f7701f;
        if (vVar.f1128d || (descriptor.b() instanceof zr.d)) {
            return;
        }
        Json json = this.f7699d;
        s.p(descriptor, json);
        if (vVar.f1130f) {
            Intrinsics.checkNotNullParameter(descriptor, "<this>");
            Set b10 = h1.b(descriptor);
            Intrinsics.checkNotNullParameter(json, "<this>");
            Map map = (Map) json.f13608c.C(descriptor, s.a);
            Set keySet = map != null ? map.keySet() : null;
            if (keySet == null) {
                keySet = o0.f13515d;
            }
            d6 = e1.d(b10, keySet);
        } else {
            Intrinsics.checkNotNullParameter(descriptor, "<this>");
            d6 = h1.b(descriptor);
        }
        for (String key : z().f13610d.keySet()) {
            if (!d6.contains(key) && !Intrinsics.areEqual(key, this.f7700e)) {
                String input = z().toString();
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(input, "input");
                StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Encountered an unknown key '", key, "'.\nUse 'ignoreUnknownKeys = true' in 'Json {}' builder to ignore unknown keys.\nCurrent input: ");
                m5.append((Object) s.o(-1, input));
                throw s.e(-1, m5.toString());
            }
        }
    }

    @Override // bs.a1
    public String r(SerialDescriptor descriptor, int i5) {
        Object obj;
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Json json = this.f7699d;
        s.p(descriptor, json);
        String g6 = descriptor.g(i5);
        if (this.f7701f.f1130f && !z().f13610d.keySet().contains(g6)) {
            Intrinsics.checkNotNullParameter(json, "<this>");
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            Intrinsics.checkNotNullParameter(json, "<this>");
            u4.c cVar = json.f13608c;
            bs.c0 defaultValue = new bs.c0(25, descriptor, json);
            cVar.getClass();
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            t key = s.a;
            Intrinsics.checkNotNullParameter(key, "key");
            Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
            Object value = cVar.C(descriptor, key);
            if (value == null) {
                value = defaultValue.invoke();
                Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(value, "value");
                ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) cVar.f18811d;
                Object obj2 = concurrentHashMap.get(descriptor);
                if (obj2 == null) {
                    obj2 = new ConcurrentHashMap(2);
                    concurrentHashMap.put(descriptor, obj2);
                }
                ((Map) obj2).put(key, value);
            }
            Map map = (Map) value;
            Iterator it = z().f13610d.keySet().iterator();
            while (true) {
                if (!it.hasNext()) {
                    obj = null;
                    break;
                }
                obj = it.next();
                Integer num = (Integer) map.get((String) obj);
                if (num != null && num.intValue() == i5) {
                    break;
                }
            }
            String str = (String) obj;
            if (str != null) {
                return str;
            }
        }
        return g6;
    }

    @Override // ds.b
    public JsonElement x(String tag) {
        Intrinsics.checkNotNullParameter(tag, "tag");
        return (JsonElement) v0.e(z(), tag);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public v(Json json, JsonObject value, String str, SerialDescriptor serialDescriptor) {
        super(json, str);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(value, "value");
        this.f7742g = value;
        this.f7743h = serialDescriptor;
    }
}
