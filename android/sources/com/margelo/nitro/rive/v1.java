package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.core.FileAsset;
import app.rive.runtime.kotlin.core.FileAssetLoader;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class v1 extends FileAssetLoader {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Map f6602d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ LinkedHashMap f6603e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ w1 f6604i;

    public v1(Map map, LinkedHashMap linkedHashMap, w1 w1Var) {
        this.f6602d = map;
        this.f6603e = linkedHashMap;
        this.f6604i = w1Var;
    }

    @Override // app.rive.runtime.kotlin.core.FileAssetLoader
    public final boolean loadContents(FileAsset asset, byte[] inBandBytes) {
        Intrinsics.checkNotNullParameter(asset, "asset");
        Intrinsics.checkNotNullParameter(inBandBytes, "inBandBytes");
        String uniqueFilename = asset.getUniqueFilename();
        String Z = StringsKt.Z(uniqueFilename, uniqueFilename);
        Map map = this.f6602d;
        ResolvedReferencedAsset resolvedReferencedAsset = (ResolvedReferencedAsset) map.get(Z);
        if (resolvedReferencedAsset == null) {
            Z = asset.getName();
            resolvedReferencedAsset = (ResolvedReferencedAsset) map.get(asset.getName());
        }
        if (resolvedReferencedAsset == null) {
            return false;
        }
        this.f6603e.put(Z, asset);
        this.f6604i.a(resolvedReferencedAsset, asset);
        return true;
    }
}
