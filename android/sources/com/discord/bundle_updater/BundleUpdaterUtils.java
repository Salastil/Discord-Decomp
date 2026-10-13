package com.discord.bundle_updater;

import et.d;
import et.r;
import et.y;
import java.io.File;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlinx.serialization.json.Json;
import okio.ByteString;
import org.jetbrains.annotations.NotNull;
import qo.l;

@Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0005\bÆ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u000e\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007J2\u0010\b\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u000b\u0012\u0004\u0012\u00020\f0\n0\t2\u0006\u0010\r\u001a\u00020\u00052\b\u0010\u000e\u001a\u0004\u0018\u00010\u00052\u0006\u0010\u000f\u001a\u00020\u0005J\u000e\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\u0006\u001a\u00020\u0007¨\u0006\u0011"}, d2 = {"Lcom/discord/bundle_updater/BundleUpdaterUtils;", "", "<init>", "()V", "getManifestFromFile", "Lcom/discord/bundle_updater/AppManifest;", "file", "Ljava/io/File;", "compareJSONData", "", "Lkotlin/Pair;", "", "Lcom/discord/bundle_updater/AssetStatus;", "apkManifest", "oldManifest", "newManifest", "md5", "bundle_updater_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nBundleUpdaterUtils.kt\nKotlin\n*S Kotlin\n*F\n+ 1 BundleUpdaterUtils.kt\ncom/discord/bundle_updater/BundleUpdaterUtils\n+ 2 Json.kt\nkotlinx/serialization/json/Json\n+ 3 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,81:1\n147#2:82\n1617#3,9:83\n1869#3:92\n1870#3:94\n1626#3:95\n1#4:93\n*S KotlinDebug\n*F\n+ 1 BundleUpdaterUtils.kt\ncom/discord/bundle_updater/BundleUpdaterUtils\n*L\n52#1:82\n58#1:83,9\n58#1:92\n58#1:94\n58#1:95\n58#1:93\n*E\n"})
/* loaded from: classes.dex */
public final class BundleUpdaterUtils {

    @NotNull
    public static final BundleUpdaterUtils INSTANCE = new BundleUpdaterUtils();

    private BundleUpdaterUtils() {
    }

    @NotNull
    public final List<Pair<String, AssetStatus>> compareJSONData(@NotNull AppManifest apkManifest, AppManifest oldManifest, @NotNull AppManifest newManifest) {
        Intrinsics.checkNotNullParameter(apkManifest, "apkManifest");
        Intrinsics.checkNotNullParameter(newManifest, "newManifest");
        Set<String> keySet = newManifest.getHashes().keySet();
        ArrayList arrayList = new ArrayList();
        for (String str : keySet) {
            String str2 = newManifest.getHashes().get(str);
            Pair pair = Intrinsics.areEqual(str2, apkManifest.getHashes().get(str)) ? null : new Pair(str, (oldManifest == null || !Intrinsics.areEqual(str2, oldManifest.getHashes().get(str))) ? AssetStatus.Download : AssetStatus.CopyFromPrevious);
            if (pair != null) {
                arrayList.add(pair);
            }
        }
        return CollectionsKt.i0(arrayList);
    }

    @NotNull
    public final AppManifest getManifestFromFile(@NotNull File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        Json json = BundleUpdaterUtilsKt.getJson();
        String c6 = l.c(file);
        json.getClass();
        return (AppManifest) json.b(AppManifest.INSTANCE.serializer(), c6);
    }

    @NotNull
    public final String md5(@NotNull File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        r d6 = y.d(y.l(file));
        try {
            d sink = new d();
            Intrinsics.checkNotNullParameter(sink, "sink");
            et.l lVar = new et.l(sink);
            d6.c0(lVar);
            MessageDigest messageDigest = lVar.f8255e;
            if (messageDigest == null) {
                Intrinsics.checkNotNull(null);
                throw null;
            }
            byte[] result = messageDigest.digest();
            Intrinsics.checkNotNullExpressionValue(result, "result");
            String d7 = new ByteString(result).d();
            d6.close();
            return d7;
        } catch (Throwable th2) {
            try {
                throw th2;
            } catch (Throwable th3) {
                com.facebook.imagepipeline.nativecode.c.j(d6, th2);
                throw th3;
            }
        }
    }
}
