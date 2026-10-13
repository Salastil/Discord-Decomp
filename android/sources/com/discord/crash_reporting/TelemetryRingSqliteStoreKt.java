package com.discord.crash_reporting;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.json.JSONArray;
import org.json.JSONObject;

@Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\u001a\u001a\u0010\u0000\u001a\u0010\u0012\u0004\u0012\u00020\u0002\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0001*\u00020\u0004H\u0002\u001a\u0014\u0010\u0005\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u0006*\u00020\u0007H\u0002¨\u0006\b"}, d2 = {"toMap", "", "", "", "Lorg/json/JSONObject;", "toList", "", "Lorg/json/JSONArray;", "crash_reporting_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nTelemetryRingSqliteStore.kt\nKotlin\n*S Kotlin\n*F\n+ 1 TelemetryRingSqliteStore.kt\ncom/discord/crash_reporting/TelemetryRingSqliteStoreKt\n+ 2 Iterators.kt\nkotlin/collections/CollectionsKt__IteratorsKt\n*L\n1#1,628:1\n32#2,2:629\n*S KotlinDebug\n*F\n+ 1 TelemetryRingSqliteStore.kt\ncom/discord/crash_reporting/TelemetryRingSqliteStoreKt\n*L\n600#1:629,2\n*E\n"})
/* loaded from: classes.dex */
public final class TelemetryRingSqliteStoreKt {
    private static final List<Object> toList(JSONArray jSONArray) {
        ArrayList arrayList = new ArrayList();
        int length = jSONArray.length();
        for (int i5 = 0; i5 < length; i5++) {
            Object obj = jSONArray.get(i5);
            if (obj instanceof JSONObject) {
                obj = toMap((JSONObject) obj);
            } else if (obj instanceof JSONArray) {
                obj = toList((JSONArray) obj);
            } else if (Intrinsics.areEqual(obj, JSONObject.NULL)) {
                obj = null;
            }
            arrayList.add(obj);
        }
        return arrayList;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Map<String, Object> toMap(JSONObject jSONObject) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        Iterator<String> keys = jSONObject.keys();
        Intrinsics.checkNotNullExpressionValue(keys, "keys(...)");
        while (keys.hasNext()) {
            String next = keys.next();
            Object obj = jSONObject.get(next);
            if (obj instanceof JSONObject) {
                obj = toMap((JSONObject) obj);
            } else if (obj instanceof JSONArray) {
                obj = toList((JSONArray) obj);
            } else if (Intrinsics.areEqual(obj, JSONObject.NULL)) {
                obj = null;
            }
            linkedHashMap.put(next, obj);
        }
        return linkedHashMap;
    }
}
