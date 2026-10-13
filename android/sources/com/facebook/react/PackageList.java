package com.facebook.react;

import android.app.Application;
import android.content.Context;
import android.content.res.Resources;
import com.discord.codegen.RTNCodegenPackage;
import com.discord.kvstorage.KvStoragePackage;
import com.discord.markdown.reactnative.DiscordMarkdownPackage;
import com.discord.reanimatedview.ReanimatedViewPackage;
import com.facebook.react.shell.MainPackageConfig;
import com.facebook.react.shell.MainReactPackage;
import com.horcrux.svg.SvgPackage;
import com.margelo.nitro.playagerangedeclaration.g;
import com.swmansion.reanimated.ReanimatedPackage;
import fm.h;
import io.sentry.react.RNSentryPackage;
import java.util.ArrayList;
import java.util.Arrays;

/* loaded from: classes3.dex */
public class PackageList {
    private Application application;
    private MainPackageConfig mConfig;
    private ReactNativeHost reactNativeHost;

    public PackageList(ReactNativeHost reactNativeHost) {
        this(reactNativeHost, (MainPackageConfig) null);
    }

    private Application getApplication() {
        ReactNativeHost reactNativeHost = this.reactNativeHost;
        return reactNativeHost == null ? this.application : reactNativeHost.getApplication();
    }

    private Context getApplicationContext() {
        return getApplication().getApplicationContext();
    }

    private ReactNativeHost getReactNativeHost() {
        return this.reactNativeHost;
    }

    private Resources getResources() {
        return getApplication().getResources();
    }

    public ArrayList<ReactPackage> getPackages() {
        return new ArrayList<>(Arrays.asList(new MainReactPackage(this.mConfig), new f5.a(), new ReanimatedViewPackage(), new DiscordMarkdownPackage(), new KvStoragePackage(), new RTNCodegenPackage(), new kl.b(), new bo.b(6), new bo.b(7), new cl.c(2), new bo.b(9), new h(), new RNSentryPackage(), new bo.b(5), new com.mkuczera.haptic.d(1), new im.a(), new bo.b(8), new com.mkuczera.haptic.d(0), new com.mkuczera.haptic.d(2), new bo.b(1), new cl.c(3), new bo.b(4), new cl.c(5), new bo.b(10), new cl.c(0), new g(), new ReanimatedPackage(), new bo.b(3), new cl.c(4), new cl.c(1), new SvgPackage(), new bo.b(0), new bo.b(2)));
    }

    public PackageList(Application application) {
        this(application, (MainPackageConfig) null);
    }

    public PackageList(ReactNativeHost reactNativeHost, MainPackageConfig mainPackageConfig) {
        this.reactNativeHost = reactNativeHost;
        this.mConfig = mainPackageConfig;
    }

    public PackageList(Application application, MainPackageConfig mainPackageConfig) {
        this.reactNativeHost = null;
        this.application = application;
        this.mConfig = mainPackageConfig;
    }
}
