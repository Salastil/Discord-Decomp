package com.discord.fastest_list.react;

import com.discord.chat.presentation.message.k;
import com.discord.fastest_list.android.FastestListSections;
import com.discord.fastest_list.android.FastestListView;
import com.discord.fastest_list.android.FastestListVisibleItemsTracker;
import com.discord.fastest_list.android.placeholder.FastestListPlaceholderConfig;
import com.discord.fastest_list.android.scroll.FastestListScrollOffset;
import com.discord.fastest_list.react.FastestListViewManager;
import com.discord.fastest_list.react_events.OnLayoutEvent;
import com.discord.fastest_list.react_events.OnScrollBeginDragEvent;
import com.discord.fastest_list.react_events.OnScrollEndDragEvent;
import com.discord.fastest_list.react_events.OnScrollEvent;
import com.discord.fastest_list.react_events.OnUnexpectedItemSizeEvent;
import com.discord.fastest_list.react_events.OnVisibleItemsChangedEvent;
import com.discord.misc.utilities.size.SizeUtilsKt;
import com.discord.react.utilities.InitialPropsViewGroupManager;
import com.discord.react.utilities.ReactStylesDiffMapExtensionsKt;
import com.discord.reactevents.ReactEvents;
import com.facebook.react.bridge.NoSuchKeyException;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.facebook.react.uimanager.LayoutShadowNode;
import com.facebook.react.uimanager.ReactStylesDiffMap;
import com.facebook.react.uimanager.ThemedReactContext;
import com.facebook.react.uimanager.ViewProps;
import com.facebook.react.viewmanagers.FastestListManagerDelegate;
import com.facebook.react.viewmanagers.FastestListManagerInterface;
import java.util.Map;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.functions.Function5;
import kotlin.jvm.functions.Function6;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.reflect.KClass;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010%\n\u0002\u0010\u000e\n\u0002\u0010\u0000\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0011\b\u0001\u0018\u0000 82\b\u0012\u0004\u0012\u00020\u00020\u00012\b\u0012\u0004\u0012\u00020\u00020\u0003:\u00018B\u0007¢\u0006\u0004\b\u0004\u0010\u0005J\u0014\u0010\u000b\u001a\u000e\u0012\u0004\u0012\u00020\r\u0012\u0004\u0012\u00020\u000e0\fH\u0016J\b\u0010\u000f\u001a\u00020\rH\u0016J$\u0010\u0010\u001a\u001e\u0012\f\u0012\n \b*\u0004\u0018\u00010\u00020\u0002\u0012\f\u0012\n \b*\u0004\u0018\u00010\u00000\u00000\u0007H\u0014J\u0018\u0010\u0011\u001a\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0015H\u0016J\b\u0010\u0016\u001a\u00020\u0017H\u0016J\u0010\u0010\u0018\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00170\u0019H\u0016J\u0010\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u0002H\u0016J\u0018\u0010\u001d\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020\u001fH\u0016J\u0018\u0010 \u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020!H\u0016J\u0018\u0010\"\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020!H\u0016J\u0018\u0010#\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020\u001fH\u0016J\u001a\u0010$\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\b\u0010\u001e\u001a\u0004\u0018\u00010%H\u0016J\u001a\u0010&\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\b\u0010\u001e\u001a\u0004\u0018\u00010\rH\u0016J\u0018\u0010'\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020(H\u0016J\u001a\u0010)\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\b\u0010\u001e\u001a\u0004\u0018\u00010%H\u0016J\u0018\u0010*\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020\u001fH\u0016J\u0018\u0010+\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010\u001e\u001a\u00020\u001fH\u0016J\u0010\u0010,\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u0002H\u0014J0\u0010-\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u0010.\u001a\u00020(2\u0006\u0010/\u001a\u00020(2\u0006\u00100\u001a\u00020\u001f2\u0006\u00101\u001a\u00020(H\u0016J\u0018\u00102\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u00100\u001a\u00020\u001fH\u0016J0\u00103\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00022\u0006\u00104\u001a\u00020(2\u0006\u00105\u001a\u00020(2\u0006\u00106\u001a\u00020(2\u0006\u00107\u001a\u00020(H\u0016R*\u0010\u0006\u001a\u001e\u0012\f\u0012\n \b*\u0004\u0018\u00010\u00020\u0002\u0012\f\u0012\n \b*\u0004\u0018\u00010\u00000\u00000\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000¨\u00069"}, d2 = {"Lcom/discord/fastest_list/react/FastestListViewManager;", "Lcom/discord/react/utilities/InitialPropsViewGroupManager;", "Lcom/discord/fastest_list/android/FastestListView;", "Lcom/facebook/react/viewmanagers/FastestListManagerInterface;", "<init>", "()V", "delegate", "Lcom/facebook/react/viewmanagers/FastestListManagerDelegate;", "kotlin.jvm.PlatformType", "reactEvents", "Lcom/discord/reactevents/ReactEvents;", "getExportedCustomDirectEventTypeConstants", "", "", "", "getName", "getDelegate", "createViewInstance", "reactContext", "Lcom/facebook/react/uimanager/ThemedReactContext;", "initialProps", "Lcom/facebook/react/uimanager/ReactStylesDiffMap;", "createShadowNodeInstance", "Lcom/facebook/react/uimanager/LayoutShadowNode;", "getShadowNodeClass", "Ljava/lang/Class;", "onDropViewInstance", "", "view", "setHorizontal", "value", "", "setInsetEnd", "", "setInsetStart", "setKeyboardDismissOnDrag", "setPlaceholderConfig", "Lcom/facebook/react/bridge/ReadableMap;", "setRenderAhead", "setScrollEventThrottle", "", "setSectionsVersioned", "setShowsHorizontalScrollIndicator", "setShowsVerticalScrollIndicator", "onAfterUpdateTransaction", "scrollToLocation", "section", "item", "animated", ViewProps.PADDING_START, "scrollToTop", "setPadding", ViewProps.LEFT, ViewProps.TOP, ViewProps.RIGHT, ViewProps.BOTTOM, "Companion", "fastest_list_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@ReactModule(name = FastestListViewManager.NAME)
@SourceDebugExtension({"SMAP\nFastestListViewManager.kt\nKotlin\n*S Kotlin\n*F\n+ 1 FastestListViewManager.kt\ncom/discord/fastest_list/react/FastestListViewManager\n+ 2 ReactStylesDiffMapExtensions.kt\ncom/discord/react/utilities/ReactStylesDiffMapExtensionsKt\n*L\n1#1,276:1\n8#2,12:277\n8#2,12:289\n8#2,12:301\n8#2,12:313\n8#2,12:325\n8#2,12:337\n8#2,12:349\n*S KotlinDebug\n*F\n+ 1 FastestListViewManager.kt\ncom/discord/fastest_list/react/FastestListViewManager\n*L\n59#1:277,12\n60#1:289,12\n61#1:301,12\n62#1:313,12\n75#1:325,12\n131#1:337,12\n135#1:349,12\n*E\n"})
/* loaded from: classes.dex */
public final class FastestListViewManager extends InitialPropsViewGroupManager<FastestListView> implements FastestListManagerInterface<FastestListView> {

    @NotNull
    public static final String NAME = "FastestList";

    @NotNull
    private static final String PROP_HORIZONTAL = "horizontal";

    @NotNull
    private static final String PROP_INSET_END = "insetEnd";

    @NotNull
    private static final String PROP_INSET_START = "insetStart";

    @NotNull
    private static final String PROP_KEYBOARD_DISMISS_ON_DRAG = "keyboardDismissOnDrag";

    @NotNull
    private static final String PROP_PLACEHOLDER_CONFIG = "placeholderConfig";

    @NotNull
    private static final String PROP_RENDER_AHEAD = "renderAhead";

    @NotNull
    private static final String PROP_SCROLL_EVENT_THROTTLE = "scrollEventThrottle";

    @NotNull
    private static final String PROP_SECTIONS_VERSIONED = "sectionsVersioned";

    @NotNull
    private static final String PROP_SHOWS_HORIZONTAL_SCROLL_INDICATOR = "showsHorizontalScrollIndicator";

    @NotNull
    private static final String PROP_SHOWS_VERTICAL_SCROLL_INDICATOR = "showsVerticalScrollIndicator";

    @NotNull
    private final FastestListManagerDelegate<FastestListView, FastestListViewManager> delegate = new FastestListManagerDelegate<>(this);

    @NotNull
    private final ReactEvents reactEvents = new ReactEvents(new Pair("onUnexpectedItemSize", Reflection.getOrCreateKotlinClass(OnUnexpectedItemSizeEvent.class)), new Pair("onLayout", Reflection.getOrCreateKotlinClass(OnLayoutEvent.class)), new Pair("onScroll", Reflection.getOrCreateKotlinClass(OnScrollEvent.class)), new Pair("onScrollBeginDrag", Reflection.getOrCreateKotlinClass(OnScrollBeginDragEvent.class)), new Pair("onScrollEndDrag", Reflection.getOrCreateKotlinClass(OnScrollEndDragEvent.class)), new Pair("onVisibleItemsChanged", Reflection.getOrCreateKotlinClass(OnVisibleItemsChangedEvent.class)));

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$0(FastestListViewManager fastestListViewManager, FastestListView view, int i5, int i6, int i10, int i11) {
        Intrinsics.checkNotNullParameter(view, "view");
        fastestListViewManager.reactEvents.emitEvent(view, new OnLayoutEvent(SizeUtilsKt.getPxToDp(i5), SizeUtilsKt.getPxToDp(i6), SizeUtilsKt.getPxToDp(i10), SizeUtilsKt.getPxToDp(i11)));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$1(FastestListViewManager fastestListViewManager, FastestListView view, FastestListScrollOffset.Data data) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(data, "data");
        fastestListViewManager.reactEvents.emitEvent(view, new OnScrollEvent(data));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$2(FastestListViewManager fastestListViewManager, FastestListView view, FastestListScrollOffset.Data data) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(data, "data");
        fastestListViewManager.reactEvents.emitEvent(view, new OnScrollBeginDragEvent(data));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$3(FastestListViewManager fastestListViewManager, FastestListView view, FastestListScrollOffset.Data data) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(data, "data");
        fastestListViewManager.reactEvents.emitEvent(view, new OnScrollEndDragEvent(data));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$4(FastestListViewManager fastestListViewManager, FastestListView view, FastestListSections.Entry entry, int i5) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(entry, "entry");
        fastestListViewManager.reactEvents.emitEvent(view, new OnUnexpectedItemSizeEvent(entry, i5));
        return Unit.a;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static final Unit createViewInstance$lambda$5(FastestListViewManager fastestListViewManager, FastestListView view, String sectionsId, int i5, int i6, int i10, int i11) {
        Intrinsics.checkNotNullParameter(view, "view");
        Intrinsics.checkNotNullParameter(sectionsId, "sectionsId");
        fastestListViewManager.reactEvents.emitEvent(view, new OnVisibleItemsChangedEvent(sectionsId, i5, i6, i10, i11));
        return Unit.a;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Map<String, Object> getExportedCustomDirectEventTypeConstants() {
        return this.reactEvents.exportEventConstants();
    }

    @Override // com.facebook.react.uimanager.ViewManager, com.facebook.react.bridge.NativeModule
    @NotNull
    public String getName() {
        return NAME;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public Class<? extends LayoutShadowNode> getShadowNodeClass() {
        return FastestListShadowNode.class;
    }

    @Override // com.facebook.react.uimanager.ViewGroupManager, com.facebook.react.uimanager.ViewManager
    @NotNull
    public LayoutShadowNode createShadowNodeInstance() {
        return new FastestListShadowNode();
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:51:0x0353  */
    /* JADX WARN: Removed duplicated region for block: B:56:0x035d A[Catch: NoSuchKeyException | IllegalArgumentException -> 0x03b0, NoSuchKeyException | IllegalArgumentException -> 0x03b0, TryCatch #7 {NoSuchKeyException | IllegalArgumentException -> 0x03b0, blocks: (B:48:0x0342, B:52:0x0354, B:52:0x0354, B:56:0x035d, B:56:0x035d, B:58:0x0367, B:58:0x0367, B:60:0x037a, B:60:0x037a, B:62:0x0384, B:62:0x0384, B:63:0x0396, B:63:0x0396, B:64:0x03af, B:64:0x03af), top: B:47:0x0342 }] */
    /* JADX WARN: Type inference failed for: r0v10, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r0v7, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r0v8, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r0v9 */
    /* JADX WARN: Type inference failed for: r11v2, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r11v3, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r11v33 */
    /* JADX WARN: Type inference failed for: r19v0 */
    /* JADX WARN: Type inference failed for: r19v1 */
    /* JADX WARN: Type inference failed for: r19v2 */
    /* JADX WARN: Type inference failed for: r19v4 */
    /* JADX WARN: Type inference failed for: r3v19 */
    /* JADX WARN: Type inference failed for: r3v2, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r3v20, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r3v3, types: [java.lang.Boolean] */
    /* JADX WARN: Type inference failed for: r5v0, types: [java.lang.Float] */
    /* JADX WARN: Type inference failed for: r5v1, types: [java.lang.Number] */
    /* JADX WARN: Type inference failed for: r5v16 */
    /* JADX WARN: Type inference failed for: r5v2, types: [java.lang.Integer] */
    /* JADX WARN: Type inference failed for: r5v3, types: [java.lang.Number] */
    /* JADX WARN: Type inference failed for: r5v6 */
    @Override // com.discord.react.utilities.InitialPropsViewGroupManager
    @NotNull
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public FastestListView createViewInstance(@NotNull ThemedReactContext reactContext, @NotNull ReactStylesDiffMap initialProps) {
        Float f2;
        ?? r19;
        k kVar;
        Boolean bool;
        KClass orCreateKotlinClass;
        Boolean bool2;
        KClass orCreateKotlinClass2;
        Integer num;
        Boolean bool3;
        Float valueOf;
        Boolean bool4;
        ?? valueOf2 = Float.valueOf(0.0f);
        Class cls = Float.TYPE;
        Class cls2 = Integer.TYPE;
        Class cls3 = Boolean.TYPE;
        Intrinsics.checkNotNullParameter(reactContext, "reactContext");
        Intrinsics.checkNotNullParameter(initialProps, "initialProps");
        ?? r11 = Boolean.FALSE;
        try {
            KClass orCreateKotlinClass3 = Reflection.getOrCreateKotlinClass(Boolean.class);
            if (Intrinsics.areEqual(orCreateKotlinClass3, Reflection.getOrCreateKotlinClass(cls3))) {
                bool4 = Boolean.valueOf(initialProps.getBoolean(PROP_HORIZONTAL, false));
            } else if (Intrinsics.areEqual(orCreateKotlinClass3, Reflection.getOrCreateKotlinClass(cls2))) {
                bool4 = (Boolean) Integer.valueOf(initialProps.getInt(PROP_HORIZONTAL, ((Integer) r11).intValue()));
            } else {
                if (!Intrinsics.areEqual(orCreateKotlinClass3, Reflection.getOrCreateKotlinClass(cls))) {
                    throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Boolean.class)).toString());
                }
                bool4 = (Boolean) Float.valueOf(initialProps.getFloat(PROP_HORIZONTAL, ((Float) r11).floatValue()));
            }
            r11 = bool4;
        } catch (NoSuchKeyException | IllegalArgumentException unused) {
        }
        boolean booleanValue = r11.booleanValue();
        try {
            KClass orCreateKotlinClass4 = Reflection.getOrCreateKotlinClass(Float.class);
            if (Intrinsics.areEqual(orCreateKotlinClass4, Reflection.getOrCreateKotlinClass(cls3))) {
                f2 = (Float) Boolean.valueOf(initialProps.getBoolean(PROP_INSET_END, ((Boolean) valueOf2).booleanValue()));
            } else if (Intrinsics.areEqual(orCreateKotlinClass4, Reflection.getOrCreateKotlinClass(cls2))) {
                f2 = (Float) Integer.valueOf(initialProps.getInt(PROP_INSET_END, ((Integer) valueOf2).intValue()));
            } else {
                if (!Intrinsics.areEqual(orCreateKotlinClass4, Reflection.getOrCreateKotlinClass(cls))) {
                    throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Float.class)).toString());
                }
                f2 = Float.valueOf(initialProps.getFloat(PROP_INSET_END, 0.0f));
            }
        } catch (NoSuchKeyException | IllegalArgumentException unused2) {
            f2 = valueOf2;
        }
        int dpToPx = SizeUtilsKt.getDpToPx(f2.floatValue());
        try {
            KClass orCreateKotlinClass5 = Reflection.getOrCreateKotlinClass(Float.class);
            if (Intrinsics.areEqual(orCreateKotlinClass5, Reflection.getOrCreateKotlinClass(cls3))) {
                valueOf = (Float) Boolean.valueOf(initialProps.getBoolean(PROP_INSET_START, ((Boolean) valueOf2).booleanValue()));
            } else if (Intrinsics.areEqual(orCreateKotlinClass5, Reflection.getOrCreateKotlinClass(cls2))) {
                valueOf = (Float) Integer.valueOf(initialProps.getInt(PROP_INSET_START, ((Integer) valueOf2).intValue()));
            } else {
                if (!Intrinsics.areEqual(orCreateKotlinClass5, Reflection.getOrCreateKotlinClass(cls))) {
                    throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Float.class)).toString());
                }
                valueOf = Float.valueOf(initialProps.getFloat(PROP_INSET_START, 0.0f));
            }
            valueOf2 = valueOf;
        } catch (NoSuchKeyException | IllegalArgumentException unused3) {
        }
        int dpToPx2 = SizeUtilsKt.getDpToPx(valueOf2.floatValue());
        ?? r32 = Boolean.FALSE;
        try {
            KClass orCreateKotlinClass6 = Reflection.getOrCreateKotlinClass(Boolean.class);
            if (Intrinsics.areEqual(orCreateKotlinClass6, Reflection.getOrCreateKotlinClass(cls3))) {
                r32 = Boolean.valueOf(initialProps.getBoolean(PROP_KEYBOARD_DISMISS_ON_DRAG, false));
            } else {
                if (Intrinsics.areEqual(orCreateKotlinClass6, Reflection.getOrCreateKotlinClass(cls2))) {
                    bool3 = (Boolean) Integer.valueOf(initialProps.getInt(PROP_KEYBOARD_DISMISS_ON_DRAG, ((Integer) r32).intValue()));
                } else {
                    if (!Intrinsics.areEqual(orCreateKotlinClass6, Reflection.getOrCreateKotlinClass(cls))) {
                        throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Boolean.class)).toString());
                    }
                    bool3 = (Boolean) Float.valueOf(initialProps.getFloat(PROP_KEYBOARD_DISMISS_ON_DRAG, ((Float) r32).floatValue()));
                }
                r32 = bool3;
            }
        } catch (NoSuchKeyException | IllegalArgumentException unused4) {
        }
        boolean booleanValue2 = r32.booleanValue();
        Function5 function5 = new Function5() { // from class: t6.a
            @Override // kotlin.jvm.functions.Function5
            public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5) {
                Unit createViewInstance$lambda$0;
                int intValue = ((Integer) obj2).intValue();
                int intValue2 = ((Integer) obj3).intValue();
                int intValue3 = ((Integer) obj4).intValue();
                int intValue4 = ((Integer) obj5).intValue();
                createViewInstance$lambda$0 = FastestListViewManager.createViewInstance$lambda$0(FastestListViewManager.this, (FastestListView) obj, intValue, intValue2, intValue3, intValue4);
                return createViewInstance$lambda$0;
            }
        };
        ?? r5 = 0;
        try {
            KClass orCreateKotlinClass7 = Reflection.getOrCreateKotlinClass(Integer.class);
            if (Intrinsics.areEqual(orCreateKotlinClass7, Reflection.getOrCreateKotlinClass(cls3))) {
                num = (Integer) Boolean.valueOf(initialProps.getBoolean(PROP_SCROLL_EVENT_THROTTLE, ((Boolean) r5).booleanValue()));
            } else if (Intrinsics.areEqual(orCreateKotlinClass7, Reflection.getOrCreateKotlinClass(cls2))) {
                num = Integer.valueOf(initialProps.getInt(PROP_SCROLL_EVENT_THROTTLE, 0));
            } else {
                if (!Intrinsics.areEqual(orCreateKotlinClass7, Reflection.getOrCreateKotlinClass(cls))) {
                    throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Integer.class)).toString());
                }
                num = (Integer) Float.valueOf(initialProps.getFloat(PROP_SCROLL_EVENT_THROTTLE, ((Float) r5).floatValue()));
            }
            r5 = num;
        } catch (NoSuchKeyException | IllegalArgumentException unused5) {
        }
        long intValue = r5.intValue();
        final int i5 = 0;
        Function2 function2 = new Function2(this) { // from class: t6.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ FastestListViewManager f18221e;

            {
                this.f18221e = this;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                Unit createViewInstance$lambda$1;
                Unit createViewInstance$lambda$2;
                Unit createViewInstance$lambda$3;
                FastestListView fastestListView = (FastestListView) obj;
                FastestListScrollOffset.Data data = (FastestListScrollOffset.Data) obj2;
                switch (i5) {
                    case 0:
                        createViewInstance$lambda$1 = FastestListViewManager.createViewInstance$lambda$1(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$1;
                    case 1:
                        createViewInstance$lambda$2 = FastestListViewManager.createViewInstance$lambda$2(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$2;
                    default:
                        createViewInstance$lambda$3 = FastestListViewManager.createViewInstance$lambda$3(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$3;
                }
            }
        };
        final int i6 = 1;
        Function2 function22 = new Function2(this) { // from class: t6.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ FastestListViewManager f18221e;

            {
                this.f18221e = this;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                Unit createViewInstance$lambda$1;
                Unit createViewInstance$lambda$2;
                Unit createViewInstance$lambda$3;
                FastestListView fastestListView = (FastestListView) obj;
                FastestListScrollOffset.Data data = (FastestListScrollOffset.Data) obj2;
                switch (i6) {
                    case 0:
                        createViewInstance$lambda$1 = FastestListViewManager.createViewInstance$lambda$1(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$1;
                    case 1:
                        createViewInstance$lambda$2 = FastestListViewManager.createViewInstance$lambda$2(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$2;
                    default:
                        createViewInstance$lambda$3 = FastestListViewManager.createViewInstance$lambda$3(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$3;
                }
            }
        };
        final int i10 = 2;
        Function2 function23 = new Function2(this) { // from class: t6.b

            /* renamed from: e, reason: collision with root package name */
            public final /* synthetic */ FastestListViewManager f18221e;

            {
                this.f18221e = this;
            }

            @Override // kotlin.jvm.functions.Function2
            public final Object invoke(Object obj, Object obj2) {
                Unit createViewInstance$lambda$1;
                Unit createViewInstance$lambda$2;
                Unit createViewInstance$lambda$3;
                FastestListView fastestListView = (FastestListView) obj;
                FastestListScrollOffset.Data data = (FastestListScrollOffset.Data) obj2;
                switch (i10) {
                    case 0:
                        createViewInstance$lambda$1 = FastestListViewManager.createViewInstance$lambda$1(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$1;
                    case 1:
                        createViewInstance$lambda$2 = FastestListViewManager.createViewInstance$lambda$2(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$2;
                    default:
                        createViewInstance$lambda$3 = FastestListViewManager.createViewInstance$lambda$3(this.f18221e, fastestListView, data);
                        return createViewInstance$lambda$3;
                }
            }
        };
        k kVar2 = new k(4, this);
        Function6 function6 = new Function6() { // from class: t6.c
            @Override // kotlin.jvm.functions.Function6
            public final Object invoke(Object obj, Object obj2, Object obj3, Object obj4, Object obj5, Object obj6) {
                Unit createViewInstance$lambda$5;
                int intValue2 = ((Integer) obj3).intValue();
                int intValue3 = ((Integer) obj4).intValue();
                int intValue4 = ((Integer) obj5).intValue();
                int intValue5 = ((Integer) obj6).intValue();
                createViewInstance$lambda$5 = FastestListViewManager.createViewInstance$lambda$5(FastestListViewManager.this, (FastestListView) obj, (String) obj2, intValue2, intValue3, intValue4, intValue5);
                return createViewInstance$lambda$5;
            }
        };
        FastestListPlaceholderConfig invoke = FastestListDeserializerPlaceholderConfigKt.invoke(FastestListPlaceholderConfig.INSTANCE, ReactStylesDiffMapExtensionsKt.getNonNullMap(initialProps, PROP_PLACEHOLDER_CONFIG));
        FastestListVisibleItemsTracker.RenderAhead create = FastestListVisibleItemsTracker.RenderAhead.INSTANCE.create(ReactStylesDiffMapExtensionsKt.getNonNullString(initialProps, PROP_RENDER_AHEAD));
        FastestListSections.Versioned invoke2 = FastestListDeserializerSectionsKt.invoke(FastestListSections.Versioned.INSTANCE, ReactStylesDiffMapExtensionsKt.getNonNullMap(initialProps, PROP_SECTIONS_VERSIONED));
        Boolean bool5 = Boolean.FALSE;
        try {
            orCreateKotlinClass2 = Reflection.getOrCreateKotlinClass(Boolean.class);
            r19 = bool5;
        } catch (NoSuchKeyException | IllegalArgumentException unused6) {
            r19 = bool5;
        }
        try {
            try {
                if (Intrinsics.areEqual(orCreateKotlinClass2, Reflection.getOrCreateKotlinClass(cls3))) {
                    kVar = kVar2;
                    bool = Boolean.valueOf(initialProps.getBoolean(PROP_SHOWS_HORIZONTAL_SCROLL_INDICATOR, false));
                } else {
                    kVar = kVar2;
                    if (Intrinsics.areEqual(orCreateKotlinClass2, Reflection.getOrCreateKotlinClass(cls2))) {
                        bool = (Boolean) Integer.valueOf(initialProps.getInt(PROP_SHOWS_HORIZONTAL_SCROLL_INDICATOR, ((Integer) r19).intValue()));
                    } else {
                        if (!Intrinsics.areEqual(orCreateKotlinClass2, Reflection.getOrCreateKotlinClass(cls))) {
                            throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Boolean.class)).toString());
                        }
                        bool = (Boolean) Float.valueOf(initialProps.getFloat(PROP_SHOWS_HORIZONTAL_SCROLL_INDICATOR, ((Float) r19).floatValue()));
                    }
                }
            } catch (NoSuchKeyException | IllegalArgumentException unused7) {
                bool = r19;
                boolean booleanValue3 = bool.booleanValue();
                ?? r02 = Boolean.FALSE;
                orCreateKotlinClass = Reflection.getOrCreateKotlinClass(Boolean.class);
                if (Intrinsics.areEqual(orCreateKotlinClass, Reflection.getOrCreateKotlinClass(cls3))) {
                }
                return new FastestListView(reactContext, booleanValue, dpToPx, dpToPx2, booleanValue2, function5, intValue, function2, function22, function23, kVar, function6, invoke, create, invoke2, booleanValue3, r02.booleanValue());
            }
        } catch (NoSuchKeyException | IllegalArgumentException unused8) {
            kVar = kVar2;
            bool = r19;
            boolean booleanValue32 = bool.booleanValue();
            ?? r022 = Boolean.FALSE;
            orCreateKotlinClass = Reflection.getOrCreateKotlinClass(Boolean.class);
            if (Intrinsics.areEqual(orCreateKotlinClass, Reflection.getOrCreateKotlinClass(cls3))) {
            }
            return new FastestListView(reactContext, booleanValue, dpToPx, dpToPx2, booleanValue2, function5, intValue, function2, function22, function23, kVar, function6, invoke, create, invoke2, booleanValue32, r022.booleanValue());
        }
        boolean booleanValue322 = bool.booleanValue();
        ?? r0222 = Boolean.FALSE;
        try {
            orCreateKotlinClass = Reflection.getOrCreateKotlinClass(Boolean.class);
            if (Intrinsics.areEqual(orCreateKotlinClass, Reflection.getOrCreateKotlinClass(cls3))) {
                r0222 = Boolean.valueOf(initialProps.getBoolean(PROP_SHOWS_VERTICAL_SCROLL_INDICATOR, false));
            } else {
                if (Intrinsics.areEqual(orCreateKotlinClass, Reflection.getOrCreateKotlinClass(cls2))) {
                    bool2 = (Boolean) Integer.valueOf(initialProps.getInt(PROP_SHOWS_VERTICAL_SCROLL_INDICATOR, ((Integer) r0222).intValue()));
                } else {
                    if (!Intrinsics.areEqual(orCreateKotlinClass, Reflection.getOrCreateKotlinClass(cls))) {
                        throw new IllegalStateException(("Unsupported type " + Reflection.getOrCreateKotlinClass(Boolean.class)).toString());
                    }
                    bool2 = (Boolean) Float.valueOf(initialProps.getFloat(PROP_SHOWS_VERTICAL_SCROLL_INDICATOR, ((Float) r0222).floatValue()));
                }
                r0222 = bool2;
            }
        } catch (NoSuchKeyException | IllegalArgumentException unused9) {
        }
        return new FastestListView(reactContext, booleanValue, dpToPx, dpToPx2, booleanValue2, function5, intValue, function2, function22, function23, kVar, function6, invoke, create, invoke2, booleanValue322, r0222.booleanValue());
    }

    @Override // com.facebook.react.uimanager.ViewManager
    @NotNull
    public FastestListManagerDelegate<FastestListView, FastestListViewManager> getDelegate() {
        return this.delegate;
    }

    @Override // com.facebook.react.uimanager.BaseViewManager, com.facebook.react.uimanager.ViewManager
    public void onAfterUpdateTransaction(@NotNull FastestListView view) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.onAfterUpdateTransaction((FastestListViewManager) view);
        FastestListShadowNode.INSTANCE.updateFromShadowNode(view);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void scrollToLocation(@NotNull FastestListView view, int section, int item, boolean animated, int paddingStart) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.scrollTo(section, item, animated, paddingStart);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void scrollToTop(@NotNull FastestListView view, boolean animated) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.scrollToTop(animated);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setHorizontal(@NotNull FastestListView view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setHorizontal(value);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setInsetEnd(@NotNull FastestListView view, float value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setInsetEnd(SizeUtilsKt.getDpToPx(value));
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setInsetStart(@NotNull FastestListView view, float value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setInsetStart(SizeUtilsKt.getDpToPx(value));
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setKeyboardDismissOnDrag(@NotNull FastestListView view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setKeyboardDismissOnDrag(value);
    }

    @Override // com.facebook.react.uimanager.ViewManager
    public void setPadding(@NotNull FastestListView view, int left, int top, int right, int bottom) {
        Intrinsics.checkNotNullParameter(view, "view");
        super.setPadding((FastestListViewManager) view, left, top, right, bottom);
        view.setPadding(left, top, right, bottom);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setPlaceholderConfig(@NotNull FastestListView view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        view.setPlaceholderConfig(FastestListDeserializerPlaceholderConfigKt.invoke(FastestListPlaceholderConfig.INSTANCE, value));
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setRenderAhead(@NotNull FastestListView view, String value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        view.setRenderAhead(FastestListVisibleItemsTracker.RenderAhead.INSTANCE.create(value));
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setScrollEventThrottle(@NotNull FastestListView view, int value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setScrollEventThrottle(value);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setSectionsVersioned(@NotNull FastestListView view, ReadableMap value) {
        Intrinsics.checkNotNullParameter(view, "view");
        if (value == null) {
            throw new IllegalArgumentException("Required value was null.");
        }
        view.setSectionsVersioned(FastestListDeserializerSectionsKt.invoke(FastestListSections.Versioned.INSTANCE, value));
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setShowsHorizontalScrollIndicator(@NotNull FastestListView view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setShowsHorizontalScrollIndicator(value);
    }

    @Override // com.facebook.react.viewmanagers.FastestListManagerInterface
    public void setShowsVerticalScrollIndicator(@NotNull FastestListView view, boolean value) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.setShowsVerticalScrollIndicator(value);
    }

    @Override // com.discord.react.utilities.InitialPropsViewGroupManager
    public void onDropViewInstance(@NotNull FastestListView view) {
        Intrinsics.checkNotNullParameter(view, "view");
        view.onDrop();
        FastestListShadowNode.INSTANCE.dropShadowNode(view);
    }
}
