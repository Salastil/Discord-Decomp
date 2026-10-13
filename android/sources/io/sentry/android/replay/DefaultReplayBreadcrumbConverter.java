package io.sentry.android.replay;

import com.facebook.react.uimanager.ViewProps;
import fo.l;
import fo.m;
import io.sentry.Breadcrumb;
import io.sentry.Hint;
import io.sentry.SentryLevel;
import io.sentry.g5;
import io.sentry.i3;
import io.sentry.rrweb.b;
import io.sentry.v5;
import java.util.Collection;
import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Locale;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.MatchResult;
import kotlin.text.Regex;
import kotlin.text.StringsKt;
import kotlin.text.b0;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000J\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010%\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010$\n\u0002\b\u0005\b\u0017\u0018\u0000 \u001e2\u00020\u0001:\u0002\u001e\u001fB\u0007¢\u0006\u0004\b\u0002\u0010\u0003B\u0011\b\u0016\u0012\u0006\u0010\u0005\u001a\u00020\u0004¢\u0006\u0004\b\u0002\u0010\u0006J\u0013\u0010\t\u001a\u00020\b*\u00020\u0007H\u0002¢\u0006\u0004\b\t\u0010\nJ\u0013\u0010\f\u001a\u00020\u000b*\u00020\u000bH\u0002¢\u0006\u0004\b\f\u0010\rJ\u0013\u0010\u000f\u001a\u00020\u000e*\u00020\u0007H\u0002¢\u0006\u0004\b\u000f\u0010\u0010J\u0019\u0010\u0013\u001a\u0004\u0018\u00010\u00122\u0006\u0010\u0011\u001a\u00020\u0007H\u0016¢\u0006\u0004\b\u0013\u0010\u0014R\u0018\u0010\u0005\u001a\u0004\u0018\u00010\u00048\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0005\u0010\u0015R\u0018\u0010\u0016\u001a\u0004\u0018\u00010\u000b8\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b\u0016\u0010\u0017RT\u0010\u001c\u001aB\u0012\f\u0012\n \u0019*\u0004\u0018\u00010\u00070\u0007\u0012\f\u0012\n \u0019*\u0004\u0018\u00010\u001a0\u001a \u0019* \u0012\f\u0012\n \u0019*\u0004\u0018\u00010\u00070\u0007\u0012\f\u0012\n \u0019*\u0004\u0018\u00010\u001a0\u001a\u0018\u00010\u001b0\u00188\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u001c\u0010\u001d¨\u0006 "}, d2 = {"Lio/sentry/android/replay/DefaultReplayBreadcrumbConverter;", "Lio/sentry/i3;", "<init>", "()V", "Lio/sentry/v5;", "options", "(Lio/sentry/v5;)V", "Lio/sentry/Breadcrumb;", "", "isValidForRRWebSpan", "(Lio/sentry/Breadcrumb;)Z", "", "snakeToCamelCase", "(Ljava/lang/String;)Ljava/lang/String;", "Lio/sentry/rrweb/l;", "toRRWebSpanEvent", "(Lio/sentry/Breadcrumb;)Lio/sentry/rrweb/l;", "breadcrumb", "Lio/sentry/rrweb/b;", "convert", "(Lio/sentry/Breadcrumb;)Lio/sentry/rrweb/b;", "Lio/sentry/v5;", "lastConnectivityState", "Ljava/lang/String;", "", "kotlin.jvm.PlatformType", "Lio/sentry/util/network/a;", "", "httpNetworkDetails", "Ljava/util/Map;", "Companion", "ReplayBeforeBreadcrumbCallback", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nDefaultReplayBreadcrumbConverter.kt\nKotlin\n*S Kotlin\n*F\n+ 1 DefaultReplayBreadcrumbConverter.kt\nio/sentry/android/replay/DefaultReplayBreadcrumbConverter\n+ 2 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 4 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,293:1\n478#2,7:294\n1#3:301\n1549#4:302\n1620#4,3:303\n1549#4:306\n1620#4,3:307\n*S KotlinDebug\n*F\n+ 1 DefaultReplayBreadcrumbConverter.kt\nio/sentry/android/replay/DefaultReplayBreadcrumbConverter\n*L\n169#1:294,7\n247#1:302\n247#1:303,3\n266#1:306\n266#1:307,3\n*E\n"})
/* loaded from: classes3.dex */
public class DefaultReplayBreadcrumbConverter implements i3 {
    private static final int MAX_HTTP_NETWORK_DETAILS = 32;

    @NotNull
    private static final HashSet<String> supportedNetworkData;
    private final Map<Breadcrumb, io.sentry.util.network.a> httpNetworkDetails;
    private String lastConnectivityState;
    private v5 options;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @NotNull
    private static final Lazy snakecasePattern$delegate = l.b(m.f8828i, new Function0<Regex>() { // from class: io.sentry.android.replay.DefaultReplayBreadcrumbConverter$Companion$snakecasePattern$2
        @Override // kotlin.jvm.functions.Function0
        public final Regex invoke() {
            return new Regex("_[a-z]");
        }
    });

    @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0000\b\u0080\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u001b\u0010\u0005\u001a\u00020\u00068BX\u0082\u0084\u0002¢\u0006\f\n\u0004\b\t\u0010\n\u001a\u0004\b\u0007\u0010\bR\u001e\u0010\u000b\u001a\u0012\u0012\u0004\u0012\u00020\r0\fj\b\u0012\u0004\u0012\u00020\r`\u000eX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lio/sentry/android/replay/DefaultReplayBreadcrumbConverter$Companion;", "", "()V", "MAX_HTTP_NETWORK_DETAILS", "", "snakecasePattern", "Lkotlin/text/Regex;", "getSnakecasePattern", "()Lkotlin/text/Regex;", "snakecasePattern$delegate", "Lkotlin/Lazy;", "supportedNetworkData", "Ljava/util/HashSet;", "", "Lkotlin/collections/HashSet;", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final Regex getSnakecasePattern() {
            return (Regex) DefaultReplayBreadcrumbConverter.snakecasePattern$delegate.getValue();
        }

        private Companion() {
        }
    }

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0082\u0004\u0018\u00002\u00020\u0001B\u0011\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0001¢\u0006\u0004\b\u0003\u0010\u0004J!\u0010\n\u001a\u0004\u0018\u00010\t2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\b\u001a\u00020\u0007H\u0002¢\u0006\u0004\b\n\u0010\u000bJ!\u0010\r\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\f\u001a\u00020\u0007H\u0016¢\u0006\u0004\b\r\u0010\u000eR\u0016\u0010\u0002\u001a\u0004\u0018\u00010\u00018\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0002\u0010\u000f¨\u0006\u0010"}, d2 = {"Lio/sentry/android/replay/DefaultReplayBreadcrumbConverter$ReplayBeforeBreadcrumbCallback;", "Lio/sentry/g5;", "delegate", "<init>", "(Lio/sentry/android/replay/DefaultReplayBreadcrumbConverter;Lio/sentry/g5;)V", "Lio/sentry/Breadcrumb;", "breadcrumb", "Lio/sentry/Hint;", "breadcrumbHint", "Lio/sentry/util/network/a;", "extractNetworkRequestDataFromHint", "(Lio/sentry/Breadcrumb;Lio/sentry/Hint;)Lio/sentry/util/network/a;", "hint", "execute", "(Lio/sentry/Breadcrumb;Lio/sentry/Hint;)Lio/sentry/Breadcrumb;", "Lio/sentry/g5;", "sentry-android-replay_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    public final class ReplayBeforeBreadcrumbCallback implements g5 {
        private final g5 delegate;

        public ReplayBeforeBreadcrumbCallback(g5 g5Var) {
            this.delegate = g5Var;
        }

        private final io.sentry.util.network.a extractNetworkRequestDataFromHint(Breadcrumb breadcrumb, Hint breadcrumbHint) {
            if (!Intrinsics.areEqual(breadcrumb.f10976w, "http") && !Intrinsics.areEqual(breadcrumb.f10978y, "http")) {
                return null;
            }
            breadcrumbHint.b("sentry:replayNetworkDetails");
            return null;
        }

        @Override // io.sentry.g5
        public Breadcrumb execute(@NotNull Breadcrumb breadcrumb, @NotNull Hint hint) {
            Intrinsics.checkNotNullParameter(breadcrumb, "breadcrumb");
            Intrinsics.checkNotNullParameter(hint, "hint");
            g5 g5Var = this.delegate;
            if (g5Var != null) {
                breadcrumb = g5Var.execute(breadcrumb, hint);
            }
            if (breadcrumb != null) {
                extractNetworkRequestDataFromHint(breadcrumb, hint);
            }
            return breadcrumb;
        }
    }

    static {
        HashSet<String> hashSet = new HashSet<>();
        hashSet.add("status_code");
        hashSet.add("method");
        hashSet.add("response_content_length");
        hashSet.add("request_content_length");
        hashSet.add("http.response_content_length");
        hashSet.add("http.request_content_length");
        supportedNetworkData = hashSet;
    }

    public DefaultReplayBreadcrumbConverter() {
        this.httpNetworkDetails = Collections.synchronizedMap(new LinkedHashMap<Breadcrumb, io.sentry.util.network.a>() { // from class: io.sentry.android.replay.DefaultReplayBreadcrumbConverter$httpNetworkDetails$1
            public /* bridge */ boolean containsKey(Breadcrumb breadcrumb) {
                return super.containsKey((Object) breadcrumb);
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ boolean containsValue(Object obj) {
                return false;
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ Set<Map.Entry<Breadcrumb, io.sentry.util.network.a>> entrySet() {
                return getEntries();
            }

            public io.sentry.util.network.a get(Breadcrumb breadcrumb) {
                if (super.get((Object) breadcrumb) == null) {
                    return null;
                }
                throw new ClassCastException();
            }

            public /* bridge */ Set<Map.Entry<Breadcrumb, io.sentry.util.network.a>> getEntries() {
                return super.entrySet();
            }

            public /* bridge */ Set<Breadcrumb> getKeys() {
                return super.keySet();
            }

            public io.sentry.util.network.a getOrDefault(Breadcrumb breadcrumb, io.sentry.util.network.a aVar) {
                if (super.getOrDefault((Object) breadcrumb, (Breadcrumb) aVar) == null) {
                    return null;
                }
                throw new ClassCastException();
            }

            public /* bridge */ int getSize() {
                return super.size();
            }

            public /* bridge */ Collection<io.sentry.util.network.a> getValues() {
                return super.values();
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ Set<Breadcrumb> keySet() {
                return getKeys();
            }

            @Override // java.util.HashMap, java.util.Map
            public final /* bridge */ boolean remove(Object obj, Object obj2) {
                return false;
            }

            @Override // java.util.LinkedHashMap
            public boolean removeEldestEntry(Map.Entry<Breadcrumb, io.sentry.util.network.a> eldest) {
                return size() > 32;
            }

            @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ int size() {
                return getSize();
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ Collection<io.sentry.util.network.a> values() {
                return getValues();
            }

            @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ boolean containsKey(Object obj) {
                if (obj instanceof Breadcrumb) {
                    return containsKey((Breadcrumb) obj);
                }
                return false;
            }

            public /* bridge */ boolean containsValue(io.sentry.util.network.a aVar) {
                return super.containsValue((Object) aVar);
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ io.sentry.util.network.a get(Object obj) {
                if (!(obj instanceof Breadcrumb)) {
                    return null;
                }
                get((Breadcrumb) obj);
                return null;
            }

            public final /* bridge */ io.sentry.util.network.a getOrDefault(Object obj, io.sentry.util.network.a aVar) {
                if (!(obj instanceof Breadcrumb)) {
                    return aVar;
                }
                getOrDefault((Breadcrumb) obj, aVar);
                return null;
            }

            public io.sentry.util.network.a remove(Breadcrumb breadcrumb) {
                if (super.remove((Object) breadcrumb) == null) {
                    return null;
                }
                throw new ClassCastException();
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ /* synthetic */ Object get(Object obj) {
                if (!(obj instanceof Breadcrumb)) {
                    return null;
                }
                get((Breadcrumb) obj);
                return null;
            }

            @Override // java.util.LinkedHashMap, java.util.HashMap, java.util.Map
            public final /* synthetic */ Object getOrDefault(Object obj, Object obj2) {
                if (!(obj instanceof Breadcrumb)) {
                    return obj2;
                }
                Breadcrumb breadcrumb = (Breadcrumb) obj;
                if (obj2 != null) {
                    throw new ClassCastException();
                }
                getOrDefault(breadcrumb, (io.sentry.util.network.a) null);
                return null;
            }

            @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ io.sentry.util.network.a remove(Object obj) {
                if (!(obj instanceof Breadcrumb)) {
                    return null;
                }
                remove((Breadcrumb) obj);
                return null;
            }

            @Override // java.util.HashMap, java.util.AbstractMap, java.util.Map
            public final /* bridge */ /* synthetic */ Object remove(Object obj) {
                if (!(obj instanceof Breadcrumb)) {
                    return null;
                }
                remove((Breadcrumb) obj);
                return null;
            }

            public /* bridge */ boolean remove(Breadcrumb breadcrumb, io.sentry.util.network.a aVar) {
                return super.remove((Object) breadcrumb, (Object) aVar);
            }
        });
    }

    private final boolean isValidForRRWebSpan(Breadcrumb breadcrumb) {
        Object obj = breadcrumb.f10977x.get("url");
        String str = obj instanceof String ? (String) obj : null;
        if (str == null || str.length() == 0) {
            return false;
        }
        ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
        Intrinsics.checkNotNullExpressionValue(concurrentHashMap, "getData(...)");
        if (!concurrentHashMap.containsKey("http.start_timestamp")) {
            return false;
        }
        ConcurrentHashMap concurrentHashMap2 = breadcrumb.f10977x;
        Intrinsics.checkNotNullExpressionValue(concurrentHashMap2, "getData(...)");
        return concurrentHashMap2.containsKey("http.end_timestamp");
    }

    private final String snakeToCamelCase(String str) {
        return INSTANCE.getSnakecasePattern().e(str, new Function1<MatchResult, CharSequence>() { // from class: io.sentry.android.replay.DefaultReplayBreadcrumbConverter$snakeToCamelCase$1
            @Override // kotlin.jvm.functions.Function1
            public final CharSequence invoke(MatchResult it) {
                Intrinsics.checkNotNullParameter(it, "it");
                String upperCase = String.valueOf(b0.z(it.getValue())).toUpperCase(Locale.ROOT);
                Intrinsics.checkNotNullExpressionValue(upperCase, "toUpperCase(...)");
                return upperCase;
            }
        });
    }

    private final io.sentry.rrweb.l toRRWebSpanEvent(Breadcrumb breadcrumb) {
        double longValue;
        double longValue2;
        Object obj = breadcrumb.f10977x.get("http.start_timestamp");
        Object obj2 = breadcrumb.f10977x.get("http.end_timestamp");
        io.sentry.rrweb.l lVar = new io.sentry.rrweb.l();
        lVar.f11943e = breadcrumb.b().getTime();
        lVar.f11965v = "resource.http";
        Object obj3 = breadcrumb.f10977x.get("url");
        Intrinsics.checkNotNull(obj3, "null cannot be cast to non-null type kotlin.String");
        lVar.f11966w = (String) obj3;
        if (obj instanceof Double) {
            longValue = ((Number) obj).doubleValue();
        } else {
            Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type kotlin.Long");
            longValue = ((Long) obj).longValue();
        }
        lVar.f11967x = longValue / 1000.0d;
        if (obj2 instanceof Double) {
            longValue2 = ((Number) obj2).doubleValue();
        } else {
            Intrinsics.checkNotNull(obj2, "null cannot be cast to non-null type kotlin.Long");
            longValue2 = ((Long) obj2).longValue();
        }
        lVar.f11968y = longValue2 / 1000.0d;
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        if (this.httpNetworkDetails.remove(breadcrumb) != null) {
            throw new ClassCastException();
        }
        ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
        Intrinsics.checkNotNullExpressionValue(concurrentHashMap, "getData(...)");
        for (Map.Entry entry : concurrentHashMap.entrySet()) {
            String str = (String) entry.getKey();
            Object value = entry.getValue();
            if (supportedNetworkData.contains(str)) {
                Intrinsics.checkNotNull(str);
                linkedHashMap.put(snakeToCamelCase(StringsKt.V(x.l(str, "content_length", "body_size", false), ".")), value);
            }
        }
        lVar.E = new ConcurrentHashMap(linkedHashMap);
        return lVar;
    }

    /* JADX WARN: Removed duplicated region for block: B:42:0x00d1  */
    /* JADX WARN: Removed duplicated region for block: B:43:? A[RETURN, SYNTHETIC] */
    @Override // io.sentry.i3
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b convert(@NotNull Breadcrumb breadcrumb) {
        String str;
        SentryLevel sentryLevel;
        Object obj;
        String str2;
        Intrinsics.checkNotNullParameter(breadcrumb, "breadcrumb");
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        if (Intrinsics.areEqual(breadcrumb.f10978y, "http")) {
            if (isValidForRRWebSpan(breadcrumb)) {
                return toRRWebSpanEvent(breadcrumb);
            }
            return null;
        }
        String str3 = "navigation";
        if (Intrinsics.areEqual(breadcrumb.f10976w, "navigation") && Intrinsics.areEqual(breadcrumb.f10978y, "app.lifecycle")) {
            str3 = "app." + breadcrumb.f10977x.get("state");
        } else if (Intrinsics.areEqual(breadcrumb.f10976w, "navigation") && Intrinsics.areEqual(breadcrumb.f10978y, "device.orientation")) {
            str3 = breadcrumb.f10978y;
            Intrinsics.checkNotNull(str3);
            Object obj2 = breadcrumb.f10977x.get(ViewProps.POSITION);
            if (!Intrinsics.areEqual(obj2, "landscape") && !Intrinsics.areEqual(obj2, "portrait")) {
                return null;
            }
            linkedHashMap.put(ViewProps.POSITION, obj2);
        } else {
            if (!Intrinsics.areEqual(breadcrumb.f10976w, "navigation")) {
                if (Intrinsics.areEqual(breadcrumb.f10978y, "ui.click")) {
                    Object obj3 = breadcrumb.f10977x.get("view.id");
                    if (obj3 == null && (obj3 = breadcrumb.f10977x.get("view.tag")) == null) {
                        obj3 = breadcrumb.f10977x.get("view.class");
                    }
                    str = obj3 instanceof String ? (String) obj3 : null;
                    if (str == null) {
                        return null;
                    }
                    ConcurrentHashMap concurrentHashMap = breadcrumb.f10977x;
                    Intrinsics.checkNotNullExpressionValue(concurrentHashMap, "getData(...)");
                    linkedHashMap.putAll(concurrentHashMap);
                    str3 = "ui.tap";
                    sentryLevel = null;
                } else if (Intrinsics.areEqual(breadcrumb.f10976w, "system") && Intrinsics.areEqual(breadcrumb.f10978y, "network.event")) {
                    if (Intrinsics.areEqual(breadcrumb.f10977x.get("action"), "NETWORK_LOST")) {
                        obj = "offline";
                    } else {
                        ConcurrentHashMap concurrentHashMap2 = breadcrumb.f10977x;
                        Intrinsics.checkNotNullExpressionValue(concurrentHashMap2, "getData(...)");
                        if (!concurrentHashMap2.containsKey("network_type")) {
                            return null;
                        }
                        Object obj4 = breadcrumb.f10977x.get("network_type");
                        String str4 = obj4 instanceof String ? (String) obj4 : null;
                        if (str4 == null || str4.length() == 0) {
                            return null;
                        }
                        obj = breadcrumb.f10977x.get("network_type");
                    }
                    linkedHashMap.put("state", obj);
                    if (Intrinsics.areEqual(this.lastConnectivityState, linkedHashMap.get("state"))) {
                        return null;
                    }
                    Object obj5 = linkedHashMap.get("state");
                    this.lastConnectivityState = obj5 instanceof String ? (String) obj5 : null;
                    str3 = "device.connectivity";
                } else if (Intrinsics.areEqual(breadcrumb.f10977x.get("action"), "BATTERY_CHANGED")) {
                    ConcurrentHashMap concurrentHashMap3 = breadcrumb.f10977x;
                    Intrinsics.checkNotNullExpressionValue(concurrentHashMap3, "getData(...)");
                    LinkedHashMap linkedHashMap2 = new LinkedHashMap();
                    for (Map.Entry entry : concurrentHashMap3.entrySet()) {
                        String str5 = (String) entry.getKey();
                        if (Intrinsics.areEqual(str5, "level") || Intrinsics.areEqual(str5, "charging")) {
                            linkedHashMap2.put(entry.getKey(), entry.getValue());
                        }
                    }
                    linkedHashMap.putAll(linkedHashMap2);
                    str3 = "device.battery";
                } else {
                    str3 = breadcrumb.f10978y;
                    str = breadcrumb.f10975v;
                    sentryLevel = breadcrumb.F;
                    ConcurrentHashMap concurrentHashMap4 = breadcrumb.f10977x;
                    Intrinsics.checkNotNullExpressionValue(concurrentHashMap4, "getData(...)");
                    linkedHashMap.putAll(concurrentHashMap4);
                }
                if (str3 == null && str3.length() != 0) {
                    io.sentry.rrweb.a aVar = new io.sentry.rrweb.a();
                    aVar.f11943e = breadcrumb.b().getTime();
                    aVar.f11938v = breadcrumb.b().getTime() / 1000.0d;
                    aVar.f11939w = "default";
                    aVar.f11940x = str3;
                    aVar.f11941y = str;
                    aVar.E = sentryLevel;
                    aVar.F = new ConcurrentHashMap(linkedHashMap);
                    return aVar;
                }
            }
            if (Intrinsics.areEqual(breadcrumb.f10977x.get("state"), "resumed")) {
                Object obj6 = breadcrumb.f10977x.get("screen");
                String str6 = obj6 instanceof String ? (String) obj6 : null;
                if (str6 != null) {
                    str2 = StringsKt.W('.', str6, str6);
                    if (str2 != null) {
                        return null;
                    }
                    linkedHashMap.put("to", str2);
                }
                str2 = null;
                if (str2 != null) {
                }
            } else {
                ConcurrentHashMap concurrentHashMap5 = breadcrumb.f10977x;
                Intrinsics.checkNotNullExpressionValue(concurrentHashMap5, "getData(...)");
                if (concurrentHashMap5.containsKey("to")) {
                    Object obj7 = breadcrumb.f10977x.get("to");
                    if (obj7 instanceof String) {
                        str2 = (String) obj7;
                        if (str2 != null) {
                        }
                    }
                }
                str2 = null;
                if (str2 != null) {
                }
            }
        }
        str = null;
        sentryLevel = null;
        return str3 == null ? null : null;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public DefaultReplayBreadcrumbConverter(@NotNull v5 options) {
        this();
        Intrinsics.checkNotNullParameter(options, "options");
        this.options = options;
        if (options == null) {
            return;
        }
        options.setBeforeBreadcrumb(new ReplayBeforeBreadcrumbCallback(options.getBeforeBreadcrumb()));
    }
}
