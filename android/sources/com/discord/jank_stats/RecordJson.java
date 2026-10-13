package com.discord.jank_stats;

import com.discord.jank_stats.JankRecordStore;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.collections.m0;
import kotlin.collections.r0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.ranges.IntRange;
import org.jetbrains.annotations.NotNull;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;
import yo.j;

@Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0014\bÂ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J\u0010\u0010\b\u001a\u0004\u0018\u00010\u00072\u0006\u0010\t\u001a\u00020\u0005J\u0016\u0010\n\u001a\u00020\u000b2\f\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u000e0\rH\u0002J\u0016\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\r2\u0006\u0010\u0010\u001a\u00020\u0011H\u0002J\u0012\u0010\u0012\u001a\u0004\u0018\u00010\u000e2\u0006\u0010\u0013\u001a\u00020\u0011H\u0002R\u000e\u0010\u0014\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0019\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001a\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001c\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001d\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u001f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010 \u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\"\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010#\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006%"}, d2 = {"Lcom/discord/jank_stats/RecordJson;", "", "<init>", "()V", "encodeRecord", "", "record", "Lcom/discord/jank_stats/JankRecordStore$PendingRecord;", "decodeRecord", "text", "encodeBuckets", "Lorg/json/JSONArray;", RecordJson.FIELD_BUCKETS, "", "Lcom/discord/jank_stats/ScreenJankBucket;", "decodeBuckets", "json", "Lorg/json/JSONObject;", "decodeBucket", "item", "FIELD_SCHEMA_VERSION", "FIELD_SESSION_ID", "FIELD_SESSION_START_WALL_MS", "FIELD_APP_VERSION_CODE", "FIELD_RELEASE_CHANNEL", "FIELD_TOTAL_FRAMES", "FIELD_JANK_FRAMES", "FIELD_TOTAL_FRAME_TIME_NANOS", "FIELD_JANK_TIME_NANOS", "FIELD_SCREENS_OVER_CAP", "FIELD_BUCKETS", "FIELD_BUCKET_SCREEN", "FIELD_BUCKET_INTERACTION", "FIELD_BUCKET_TOTAL_FRAMES", "FIELD_BUCKET_JANK_FRAMES", "FIELD_BUCKET_JANK_TIME_NANOS", "FIELD_BUCKET_TOTAL_FRAME_TIME_NANOS", "jank_stats_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nJankRecordStore.kt\nKotlin\n*S Kotlin\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/RecordJson\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,378:1\n1#2:379\n1#2:392\n1869#3,2:380\n1617#3,9:382\n1869#3:391\n1870#3:393\n1626#3:394\n*S KotlinDebug\n*F\n+ 1 JankRecordStore.kt\ncom/discord/jank_stats/RecordJson\n*L\n342#1:392\n326#1:380,2\n342#1:382,9\n342#1:391\n342#1:393\n342#1:394\n*E\n"})
/* loaded from: classes.dex */
final class RecordJson {

    @NotNull
    private static final String FIELD_APP_VERSION_CODE = "appVersionCode";

    @NotNull
    private static final String FIELD_BUCKETS = "buckets";

    @NotNull
    private static final String FIELD_BUCKET_INTERACTION = "interaction";

    @NotNull
    private static final String FIELD_BUCKET_JANK_FRAMES = "jankFrames";

    @NotNull
    private static final String FIELD_BUCKET_JANK_TIME_NANOS = "jankTimeNanos";

    @NotNull
    private static final String FIELD_BUCKET_SCREEN = "screen";

    @NotNull
    private static final String FIELD_BUCKET_TOTAL_FRAMES = "totalFrames";

    @NotNull
    private static final String FIELD_BUCKET_TOTAL_FRAME_TIME_NANOS = "totalFrameTimeNanos";

    @NotNull
    private static final String FIELD_JANK_FRAMES = "jankFrames";

    @NotNull
    private static final String FIELD_JANK_TIME_NANOS = "jankTimeNanos";

    @NotNull
    private static final String FIELD_RELEASE_CHANNEL = "releaseChannel";

    @NotNull
    private static final String FIELD_SCHEMA_VERSION = "schemaVersion";

    @NotNull
    private static final String FIELD_SCREENS_OVER_CAP = "screensOverCap";

    @NotNull
    private static final String FIELD_SESSION_ID = "sessionId";

    @NotNull
    private static final String FIELD_SESSION_START_WALL_MS = "sessionStartWallMs";

    @NotNull
    private static final String FIELD_TOTAL_FRAMES = "totalFrames";

    @NotNull
    private static final String FIELD_TOTAL_FRAME_TIME_NANOS = "totalFrameTimeNanos";

    @NotNull
    public static final RecordJson INSTANCE = new RecordJson();

    private RecordJson() {
    }

    private final ScreenJankBucket decodeBucket(JSONObject item) {
        String optString = item.optString(FIELD_BUCKET_SCREEN);
        Intrinsics.checkNotNull(optString);
        String str = optString.length() > 0 ? optString : null;
        if (str == null) {
            return null;
        }
        String optString2 = item.optString(FIELD_BUCKET_INTERACTION);
        Intrinsics.checkNotNull(optString2);
        String str2 = optString2.length() > 0 ? optString2 : null;
        if (str2 == null) {
            str2 = "none";
        }
        return new ScreenJankBucket(str, str2, item.optInt("totalFrames"), item.optInt("jankFrames"), item.optLong("jankTimeNanos"), item.optLong("totalFrameTimeNanos"));
    }

    private final List<ScreenJankBucket> decodeBuckets(JSONObject json) {
        JSONArray optJSONArray = json.optJSONArray(FIELD_BUCKETS);
        if (optJSONArray == null) {
            return m0.f13512d;
        }
        IntRange i5 = j.i(0, optJSONArray.length());
        ArrayList arrayList = new ArrayList();
        Iterator it = i5.iterator();
        while (it.hasNext()) {
            JSONObject optJSONObject = optJSONArray.optJSONObject(((r0) it).nextInt());
            ScreenJankBucket decodeBucket = optJSONObject != null ? INSTANCE.decodeBucket(optJSONObject) : null;
            if (decodeBucket != null) {
                arrayList.add(decodeBucket);
            }
        }
        return arrayList;
    }

    private final JSONArray encodeBuckets(List<ScreenJankBucket> buckets) {
        JSONArray jSONArray = new JSONArray();
        for (ScreenJankBucket screenJankBucket : buckets) {
            jSONArray.put(new JSONObject().put(FIELD_BUCKET_SCREEN, screenJankBucket.getScreen()).put(FIELD_BUCKET_INTERACTION, screenJankBucket.getInteraction()).put("totalFrames", screenJankBucket.getNumFrames()).put("jankFrames", screenJankBucket.getNumJankFrames()).put("jankTimeNanos", screenJankBucket.getJankTimeNanos()).put("totalFrameTimeNanos", screenJankBucket.getTotalFrameTimeNanos()));
        }
        return jSONArray;
    }

    public final JankRecordStore.PendingRecord decodeRecord(@NotNull String text) {
        Intrinsics.checkNotNullParameter(text, "text");
        try {
            JSONObject jSONObject = new JSONObject(text);
            String optString = jSONObject.optString(FIELD_SESSION_ID);
            Intrinsics.checkNotNull(optString);
            String str = optString.length() > 0 ? optString : null;
            if (str == null) {
                return null;
            }
            long optLong = jSONObject.optLong(FIELD_SESSION_START_WALL_MS);
            int optInt = jSONObject.optInt(FIELD_APP_VERSION_CODE);
            String optString2 = jSONObject.optString(FIELD_RELEASE_CHANNEL);
            Intrinsics.checkNotNullExpressionValue(optString2, "optString(...)");
            return new JankRecordStore.PendingRecord(str, optLong, optInt, optString2, jSONObject.optLong("totalFrames"), jSONObject.optLong("jankFrames"), jSONObject.optLong("totalFrameTimeNanos"), jSONObject.optLong("jankTimeNanos"), decodeBuckets(jSONObject), jSONObject.optInt(FIELD_SCREENS_OVER_CAP), jSONObject.optInt(FIELD_SCHEMA_VERSION, 1));
        } catch (JSONException unused) {
            return null;
        }
    }

    @NotNull
    public final String encodeRecord(@NotNull JankRecordStore.PendingRecord record) {
        Intrinsics.checkNotNullParameter(record, "record");
        JSONObject put = new JSONObject().put(FIELD_SESSION_ID, record.getSessionId()).put(FIELD_SESSION_START_WALL_MS, record.getSessionStartWallMs()).put(FIELD_APP_VERSION_CODE, record.getAppVersionCode()).put(FIELD_RELEASE_CHANNEL, record.getReleaseChannel()).put("totalFrames", record.getTotalFrames()).put("jankFrames", record.getJankFrames()).put("totalFrameTimeNanos", record.getTotalFrameTimeNanos()).put("jankTimeNanos", record.getJankTimeNanos()).put(FIELD_SCHEMA_VERSION, record.getSchemaVersion());
        if (!record.getBuckets().isEmpty()) {
            put.put(FIELD_SCREENS_OVER_CAP, record.getScreensOverCap()).put(FIELD_BUCKETS, encodeBuckets(record.getBuckets()));
        }
        String jSONObject = put.toString();
        Intrinsics.checkNotNullExpressionValue(jSONObject, "toString(...)");
        return jSONObject;
    }
}
