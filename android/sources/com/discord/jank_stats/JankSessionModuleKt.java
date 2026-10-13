package com.discord.jank_stats;

import java.util.Collection;
import java.util.LinkedHashMap;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;

@Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\u0006\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u001c\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u00032\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00060\u0003H\u0002\"\u000e\u0010\u0000\u001a\u00020\u0001X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0007"}, d2 = {"NANOS_PER_MS", "", "rollUpByScreen", "", "Lcom/discord/jank_stats/ScreenRollup;", "buckets", "Lcom/discord/jank_stats/ScreenJankBucket;", "jank_stats_release"}, k = 2, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankSessionModule.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankSessionModule.kt\ncom/discord/jank_stats/JankSessionModuleKt\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 3 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,112:1\n1869#2:113\n1870#2:121\n384#3,7:114\n*S KotlinDebug\n*F\n+ 1 JankSessionModule.kt\ncom/discord/jank_stats/JankSessionModuleKt\n*L\n107#1:113\n107#1:121\n108#1:114,7\n*E\n"})
/* loaded from: classes.dex */
public final class JankSessionModuleKt {
    private static final double NANOS_PER_MS = 1000000.0d;

    /* JADX INFO: Access modifiers changed from: private */
    public static final List<ScreenRollup> rollUpByScreen(List<ScreenJankBucket> list) {
        LinkedHashMap linkedHashMap = new LinkedHashMap();
        for (ScreenJankBucket screenJankBucket : list) {
            String screen = screenJankBucket.getScreen();
            Object obj = linkedHashMap.get(screen);
            if (obj == null) {
                obj = new ScreenRollup(screenJankBucket.getScreen());
                linkedHashMap.put(screen, obj);
            }
            ((ScreenRollup) obj).add(screenJankBucket);
        }
        Collection values = linkedHashMap.values();
        Intrinsics.checkNotNullExpressionValue(values, "<get-values>(...)");
        return CollectionsKt.i0(values);
    }
}
