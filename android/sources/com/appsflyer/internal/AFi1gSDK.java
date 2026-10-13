package com.appsflyer.internal;

import com.appsflyer.internal.platform_extension.Plugin;
import com.appsflyer.internal.platform_extension.PluginInfo;
import java.util.LinkedHashMap;
import java.util.Map;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFi1gSDK implements AFi1lSDK {

    @NotNull
    private PluginInfo getMediationNetwork = new PluginInfo(Plugin.NATIVE, "6.17.3", null, 4, null);

    @Override // com.appsflyer.internal.AFi1lSDK
    @NotNull
    public final Map<String, Object> AFAdRevenueData() {
        LinkedHashMap h6 = v0.h(new Pair("platform", this.getMediationNetwork.getPlugin().getPluginName()), new Pair("version", this.getMediationNetwork.getVersion()));
        if (!this.getMediationNetwork.getAdditionalParams().isEmpty()) {
            h6.put("extras", this.getMediationNetwork.getAdditionalParams());
        }
        return h6;
    }

    @Override // com.appsflyer.internal.AFi1lSDK
    public final void getMediationNetwork(@NotNull PluginInfo pluginInfo) {
        Intrinsics.checkNotNullParameter(pluginInfo, "");
        this.getMediationNetwork = pluginInfo;
    }
}
