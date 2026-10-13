package com.facebook.react.uimanager;

import android.content.Context;
import android.graphics.Rect;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.view.View;
import android.view.ViewGroup;
import android.view.accessibility.AccessibilityEvent;
import android.view.accessibility.AccessibilityNodeInfo;
import android.widget.EditText;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityNodeProviderCompat;
import androidx.core.view.s0;
import com.discord.key_commands.KeyCommandDescriptor;
import com.discord.misc.utilities.chat_view_types.ChatViewRecyclerTypes;
import com.facebook.react.R;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.Dynamic;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactNoCrashSoftException;
import com.facebook.react.bridge.ReactSoftExceptionLogger;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.ReadableMapKeySetIterator;
import com.facebook.react.bridge.ReadableType;
import com.facebook.react.bridge.UIManager;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.uimanager.events.Event;
import com.facebook.react.uimanager.util.ReactFindViewUtil;
import fo.n;
import ha.l;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.WeakHashMap;
import kotlin.Metadata;
import kotlin.Pair;
import kotlin.collections.v0;
import kotlin.enums.EnumEntries;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import kotlin.text.x;
import org.jetbrains.annotations.NotNull;
import z0.d;

@Metadata(d1 = {"\u0000l\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0004\n\u0002\u0010!\n\u0002\b\n\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\b\b\u0016\u0018\u0000 =2\u00020\u0001:\u0004>?@=B\u001f\u0012\u0006\u0010\u0003\u001a\u00020\u0002\u0012\u0006\u0010\u0005\u001a\u00020\u0004\u0012\u0006\u0010\u0007\u001a\u00020\u0006¢\u0006\u0004\b\b\u0010\tJ\u0017\u0010\f\u001a\u00020\u000b2\u0006\u0010\n\u001a\u00020\u0002H\u0002¢\u0006\u0004\b\f\u0010\rJ\u001f\u0010\u0010\u001a\u00020\u000b2\u0006\u0010\n\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\u000eH\u0016¢\u0006\u0004\b\u0010\u0010\u0011J\u001f\u0010\u0014\u001a\u00020\u000b2\u0006\u0010\n\u001a\u00020\u00022\u0006\u0010\u0013\u001a\u00020\u0012H\u0016¢\u0006\u0004\b\u0014\u0010\u0015J)\u0010\u0019\u001a\u00020\u00042\u0006\u0010\n\u001a\u00020\u00022\u0006\u0010\u0016\u001a\u00020\u00062\b\u0010\u0018\u001a\u0004\u0018\u00010\u0017H\u0016¢\u0006\u0004\b\u0019\u0010\u001aJ\u001f\u0010\u001e\u001a\u00020\u00062\u0006\u0010\u001c\u001a\u00020\u001b2\u0006\u0010\u001d\u001a\u00020\u001bH\u0014¢\u0006\u0004\b\u001e\u0010\u001fJ\u001d\u0010\"\u001a\u00020\u000b2\f\u0010!\u001a\b\u0012\u0004\u0012\u00020\u00060 H\u0014¢\u0006\u0004\b\"\u0010#J\u001f\u0010&\u001a\u00020\u000b2\u0006\u0010$\u001a\u00020\u00062\u0006\u0010%\u001a\u00020\u000eH\u0014¢\u0006\u0004\b&\u0010'J)\u0010)\u001a\u00020\u00042\u0006\u0010$\u001a\u00020\u00062\u0006\u0010\u0016\u001a\u00020\u00062\b\u0010(\u001a\u0004\u0018\u00010\u0017H\u0014¢\u0006\u0004\b)\u0010*J\u0019\u0010,\u001a\u0004\u0018\u00010+2\u0006\u0010\n\u001a\u00020\u0002H\u0016¢\u0006\u0004\b,\u0010-J\u0019\u0010.\u001a\u0004\u0018\u00010+2\u0006\u0010\n\u001a\u00020\u0002H\u0004¢\u0006\u0004\b.\u0010-R\u001a\u0010\u0003\u001a\u00020\u00028\u0004X\u0084\u0004¢\u0006\f\n\u0004\b\u0003\u0010/\u001a\u0004\b0\u00101R\u001a\u00103\u001a\u0002028\u0002X\u0082\u0004¢\u0006\f\n\u0004\b3\u00104\u0012\u0004\b5\u00106R4\u0010:\u001a\"\u0012\u0004\u0012\u00020\u0006\u0012\u0006\u0012\u0004\u0018\u00010807j\u0010\u0012\u0004\u0012\u00020\u0006\u0012\u0006\u0012\u0004\u0018\u000108`98\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b:\u0010;R\u0018\u0010<\u001a\u0004\u0018\u00010\u00028\u0002@\u0002X\u0082\u000e¢\u0006\u0006\n\u0004\b<\u0010/¨\u0006A"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate;", "Landroidx/customview/widget/a;", "Landroid/view/View;", "hostView", "", "originalFocus", "", "originalImportantForAccessibility", "<init>", "(Landroid/view/View;ZI)V", "host", "", "scheduleAccessibilityEventSender", "(Landroid/view/View;)V", "Landroidx/core/view/accessibility/AccessibilityNodeInfoCompat;", "info", "onInitializeAccessibilityNodeInfo", "(Landroid/view/View;Landroidx/core/view/accessibility/AccessibilityNodeInfoCompat;)V", "Landroid/view/accessibility/AccessibilityEvent;", "event", "onInitializeAccessibilityEvent", "(Landroid/view/View;Landroid/view/accessibility/AccessibilityEvent;)V", "action", "Landroid/os/Bundle;", "args", "performAccessibilityAction", "(Landroid/view/View;ILandroid/os/Bundle;)Z", "", "x", "y", "getVirtualViewAt", "(FF)I", "", "virtualViewIds", "getVisibleVirtualViews", "(Ljava/util/List;)V", "virtualViewId", "node", "onPopulateNodeForVirtualView", "(ILandroidx/core/view/accessibility/AccessibilityNodeInfoCompat;)V", "arguments", "onPerformActionForVirtualView", "(IILandroid/os/Bundle;)Z", "Landroidx/core/view/accessibility/AccessibilityNodeProviderCompat;", "getAccessibilityNodeProvider", "(Landroid/view/View;)Landroidx/core/view/accessibility/AccessibilityNodeProviderCompat;", "superGetAccessibilityNodeProvider", "Landroid/view/View;", "getHostView", "()Landroid/view/View;", "Landroid/os/Handler;", "accessibilityEventHandler", "Landroid/os/Handler;", "getAccessibilityEventHandler$annotations", "()V", "Ljava/util/HashMap;", "", "Lkotlin/collections/HashMap;", "accessibilityActionsMap", "Ljava/util/HashMap;", ViewProps.ACCESSIBILITY_LABELLED_BY, "Companion", "Role", "AccessibilityActionEvent", "AccessibilityRole", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nReactAccessibilityDelegate.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReactAccessibilityDelegate.kt\ncom/facebook/react/uimanager/ReactAccessibilityDelegate\n+ 2 fake.kt\nkotlin/jvm/internal/FakeKt\n+ 3 Maps.kt\nkotlin/collections/MapsKt__MapsKt\n*L\n1#1,1020:1\n1#2:1021\n384#3,7:1022\n*S KotlinDebug\n*F\n+ 1 ReactAccessibilityDelegate.kt\ncom/facebook/react/uimanager/ReactAccessibilityDelegate\n*L\n131#1:1022,7\n*E\n"})
/* loaded from: classes3.dex */
public class ReactAccessibilityDelegate extends androidx.customview.widget.a {
    private static final int SEND_EVENT = 1;

    @NotNull
    private static final String STATE_CHECKED = "checked";

    @NotNull
    private static final String STATE_DISABLED = "disabled";

    @NotNull
    private static final String STATE_SELECTED = "selected";

    @NotNull
    private static final String TAG = "ReactAccessibilityDelegate";
    private static final int TIMEOUT_SEND_ACCESSIBILITY_EVENT = 200;

    @NotNull
    public static final String TOP_ACCESSIBILITY_ACTION_EVENT = "topAccessibilityAction";

    @NotNull
    private static final String delimiter = ", ";
    private static final int delimiterLength = 2;

    @NotNull
    private final HashMap<Integer, String> accessibilityActionsMap;

    @NotNull
    private final Handler accessibilityEventHandler;
    private View accessibilityLabelledBy;

    @NotNull
    private final View hostView;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);

    @NotNull
    private static final Map<String, Integer> actionIdMap = v0.g(new Pair("activate", Integer.valueOf(androidx.core.view.accessibility.a.f1555g.a())), new Pair("longpress", Integer.valueOf(androidx.core.view.accessibility.a.f1556h.a())), new Pair("increment", Integer.valueOf(androidx.core.view.accessibility.a.f1557i.a())), new Pair("decrement", Integer.valueOf(androidx.core.view.accessibility.a.j.a())), new Pair("expand", Integer.valueOf(androidx.core.view.accessibility.a.k.a())), new Pair(StackTraceHelper.COLLAPSE_KEY, Integer.valueOf(androidx.core.view.accessibility.a.f1558l.a())));
    private static int customActionCounter = 1056964608;

    @NotNull
    private static final Map<String, Integer> customActionIdMap = new HashMap();

    @Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00000\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0005¢\u0006\u0004\b\u0007\u0010\bJ\b\u0010\t\u001a\u00020\nH\u0016J\n\u0010\u000b\u001a\u0004\u0018\u00010\u0003H\u0016R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$AccessibilityActionEvent;", "Lcom/facebook/react/uimanager/events/Event;", "accessibilityEventData", "Lcom/facebook/react/bridge/WritableMap;", "surfaceId", "", "viewId", "<init>", "(Lcom/facebook/react/bridge/WritableMap;II)V", "getEventName", "", "getEventData", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class AccessibilityActionEvent extends Event<AccessibilityActionEvent> {

        @NotNull
        private final WritableMap accessibilityEventData;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        public AccessibilityActionEvent(@NotNull WritableMap accessibilityEventData, int i5, int i6) {
            super(i5, i6);
            Intrinsics.checkNotNullParameter(accessibilityEventData, "accessibilityEventData");
            this.accessibilityEventData = accessibilityEventData;
        }

        @Override // com.facebook.react.uimanager.events.Event
        /* renamed from: getEventData, reason: from getter */
        public WritableMap getAccessibilityEventData() {
            return this.accessibilityEventData;
        }

        @Override // com.facebook.react.uimanager.events.Event, tm.a
        @NotNull
        /* renamed from: getEventName */
        public String getName() {
            return ReactAccessibilityDelegate.TOP_ACCESSIBILITY_ACTION_EVENT;
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\b+\b\u0086\u0081\u0002\u0018\u0000 +2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001+B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"j\u0002\b#j\u0002\b$j\u0002\b%j\u0002\b&j\u0002\b'j\u0002\b(j\u0002\b)j\u0002\b*¨\u0006,"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$AccessibilityRole;", "", "<init>", "(Ljava/lang/String;I)V", "NONE", "BUTTON", "DROPDOWNLIST", "TOGGLEBUTTON", "LINK", "SEARCH", "IMAGE", "IMAGEBUTTON", "KEYBOARDKEY", "TEXT", "ADJUSTABLE", "SUMMARY", "HEADER", "ALERT", "CHECKBOX", "COMBOBOX", "MENU", "MENUBAR", "MENUITEM", "PROGRESSBAR", "RADIO", "RADIOGROUP", "SCROLLBAR", "SPINBUTTON", "SWITCH", "TAB", "TABLIST", "TIMER", "LIST", "GRID", "PAGER", "SCROLLVIEW", "HORIZONTALSCROLLVIEW", "VIEWGROUP", "WEBVIEW", "DRAWERLAYOUT", "SLIDINGDRAWER", "ICONMENU", "TOOLBAR", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class AccessibilityRole {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ AccessibilityRole[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final AccessibilityRole NONE = new AccessibilityRole("NONE", 0);
        public static final AccessibilityRole BUTTON = new AccessibilityRole("BUTTON", 1);
        public static final AccessibilityRole DROPDOWNLIST = new AccessibilityRole("DROPDOWNLIST", 2);
        public static final AccessibilityRole TOGGLEBUTTON = new AccessibilityRole("TOGGLEBUTTON", 3);
        public static final AccessibilityRole LINK = new AccessibilityRole("LINK", 4);
        public static final AccessibilityRole SEARCH = new AccessibilityRole("SEARCH", 5);
        public static final AccessibilityRole IMAGE = new AccessibilityRole("IMAGE", 6);
        public static final AccessibilityRole IMAGEBUTTON = new AccessibilityRole("IMAGEBUTTON", 7);
        public static final AccessibilityRole KEYBOARDKEY = new AccessibilityRole("KEYBOARDKEY", 8);
        public static final AccessibilityRole TEXT = new AccessibilityRole("TEXT", 9);
        public static final AccessibilityRole ADJUSTABLE = new AccessibilityRole("ADJUSTABLE", 10);
        public static final AccessibilityRole SUMMARY = new AccessibilityRole("SUMMARY", 11);
        public static final AccessibilityRole HEADER = new AccessibilityRole("HEADER", 12);
        public static final AccessibilityRole ALERT = new AccessibilityRole("ALERT", 13);
        public static final AccessibilityRole CHECKBOX = new AccessibilityRole("CHECKBOX", 14);
        public static final AccessibilityRole COMBOBOX = new AccessibilityRole("COMBOBOX", 15);
        public static final AccessibilityRole MENU = new AccessibilityRole("MENU", 16);
        public static final AccessibilityRole MENUBAR = new AccessibilityRole("MENUBAR", 17);
        public static final AccessibilityRole MENUITEM = new AccessibilityRole("MENUITEM", 18);
        public static final AccessibilityRole PROGRESSBAR = new AccessibilityRole("PROGRESSBAR", 19);
        public static final AccessibilityRole RADIO = new AccessibilityRole("RADIO", 20);
        public static final AccessibilityRole RADIOGROUP = new AccessibilityRole("RADIOGROUP", 21);
        public static final AccessibilityRole SCROLLBAR = new AccessibilityRole("SCROLLBAR", 22);
        public static final AccessibilityRole SPINBUTTON = new AccessibilityRole("SPINBUTTON", 23);
        public static final AccessibilityRole SWITCH = new AccessibilityRole("SWITCH", 24);
        public static final AccessibilityRole TAB = new AccessibilityRole("TAB", 25);
        public static final AccessibilityRole TABLIST = new AccessibilityRole("TABLIST", 26);
        public static final AccessibilityRole TIMER = new AccessibilityRole("TIMER", 27);
        public static final AccessibilityRole LIST = new AccessibilityRole("LIST", 28);
        public static final AccessibilityRole GRID = new AccessibilityRole("GRID", 29);
        public static final AccessibilityRole PAGER = new AccessibilityRole("PAGER", 30);
        public static final AccessibilityRole SCROLLVIEW = new AccessibilityRole("SCROLLVIEW", 31);
        public static final AccessibilityRole HORIZONTALSCROLLVIEW = new AccessibilityRole("HORIZONTALSCROLLVIEW", 32);
        public static final AccessibilityRole VIEWGROUP = new AccessibilityRole("VIEWGROUP", 33);
        public static final AccessibilityRole WEBVIEW = new AccessibilityRole("WEBVIEW", 34);
        public static final AccessibilityRole DRAWERLAYOUT = new AccessibilityRole("DRAWERLAYOUT", 35);
        public static final AccessibilityRole SLIDINGDRAWER = new AccessibilityRole("SLIDINGDRAWER", 36);
        public static final AccessibilityRole ICONMENU = new AccessibilityRole("ICONMENU", 37);
        public static final AccessibilityRole TOOLBAR = new AccessibilityRole("TOOLBAR", 38);

        @Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0010\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0007J\u0012\u0010\b\u001a\u00020\u00072\b\u0010\t\u001a\u0004\u0018\u00010\u0005H\u0007J\u0012\u0010\n\u001a\u0004\u0018\u00010\u00072\u0006\u0010\u0006\u001a\u00020\u000bH\u0007J\u0012\u0010\f\u001a\u0004\u0018\u00010\u00072\u0006\u0010\r\u001a\u00020\u000eH\u0007¨\u0006\u000f"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$AccessibilityRole$Companion;", "", "<init>", "()V", "getValue", "", ViewProps.ROLE, "Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$AccessibilityRole;", "fromValue", "value", "fromRole", "Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$Role;", "fromViewTag", "view", "Landroid/view/View;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {

            @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
            public /* synthetic */ class WhenMappings {
                public static final /* synthetic */ int[] $EnumSwitchMapping$0;
                public static final /* synthetic */ int[] $EnumSwitchMapping$1;

                static {
                    int[] iArr = new int[AccessibilityRole.values().length];
                    try {
                        iArr[AccessibilityRole.BUTTON.ordinal()] = 1;
                    } catch (NoSuchFieldError unused) {
                    }
                    try {
                        iArr[AccessibilityRole.DROPDOWNLIST.ordinal()] = 2;
                    } catch (NoSuchFieldError unused2) {
                    }
                    try {
                        iArr[AccessibilityRole.TOGGLEBUTTON.ordinal()] = 3;
                    } catch (NoSuchFieldError unused3) {
                    }
                    try {
                        iArr[AccessibilityRole.SEARCH.ordinal()] = 4;
                    } catch (NoSuchFieldError unused4) {
                    }
                    try {
                        iArr[AccessibilityRole.IMAGE.ordinal()] = 5;
                    } catch (NoSuchFieldError unused5) {
                    }
                    try {
                        iArr[AccessibilityRole.IMAGEBUTTON.ordinal()] = 6;
                    } catch (NoSuchFieldError unused6) {
                    }
                    try {
                        iArr[AccessibilityRole.KEYBOARDKEY.ordinal()] = 7;
                    } catch (NoSuchFieldError unused7) {
                    }
                    try {
                        iArr[AccessibilityRole.TEXT.ordinal()] = 8;
                    } catch (NoSuchFieldError unused8) {
                    }
                    try {
                        iArr[AccessibilityRole.ADJUSTABLE.ordinal()] = 9;
                    } catch (NoSuchFieldError unused9) {
                    }
                    try {
                        iArr[AccessibilityRole.CHECKBOX.ordinal()] = 10;
                    } catch (NoSuchFieldError unused10) {
                    }
                    try {
                        iArr[AccessibilityRole.RADIO.ordinal()] = 11;
                    } catch (NoSuchFieldError unused11) {
                    }
                    try {
                        iArr[AccessibilityRole.SPINBUTTON.ordinal()] = 12;
                    } catch (NoSuchFieldError unused12) {
                    }
                    try {
                        iArr[AccessibilityRole.SWITCH.ordinal()] = 13;
                    } catch (NoSuchFieldError unused13) {
                    }
                    try {
                        iArr[AccessibilityRole.LIST.ordinal()] = 14;
                    } catch (NoSuchFieldError unused14) {
                    }
                    try {
                        iArr[AccessibilityRole.GRID.ordinal()] = 15;
                    } catch (NoSuchFieldError unused15) {
                    }
                    try {
                        iArr[AccessibilityRole.SCROLLVIEW.ordinal()] = 16;
                    } catch (NoSuchFieldError unused16) {
                    }
                    try {
                        iArr[AccessibilityRole.HORIZONTALSCROLLVIEW.ordinal()] = 17;
                    } catch (NoSuchFieldError unused17) {
                    }
                    try {
                        iArr[AccessibilityRole.PAGER.ordinal()] = 18;
                    } catch (NoSuchFieldError unused18) {
                    }
                    try {
                        iArr[AccessibilityRole.DRAWERLAYOUT.ordinal()] = 19;
                    } catch (NoSuchFieldError unused19) {
                    }
                    try {
                        iArr[AccessibilityRole.SLIDINGDRAWER.ordinal()] = 20;
                    } catch (NoSuchFieldError unused20) {
                    }
                    try {
                        iArr[AccessibilityRole.ICONMENU.ordinal()] = 21;
                    } catch (NoSuchFieldError unused21) {
                    }
                    try {
                        iArr[AccessibilityRole.VIEWGROUP.ordinal()] = 22;
                    } catch (NoSuchFieldError unused22) {
                    }
                    try {
                        iArr[AccessibilityRole.WEBVIEW.ordinal()] = 23;
                    } catch (NoSuchFieldError unused23) {
                    }
                    try {
                        iArr[AccessibilityRole.NONE.ordinal()] = 24;
                    } catch (NoSuchFieldError unused24) {
                    }
                    try {
                        iArr[AccessibilityRole.LINK.ordinal()] = 25;
                    } catch (NoSuchFieldError unused25) {
                    }
                    try {
                        iArr[AccessibilityRole.SUMMARY.ordinal()] = 26;
                    } catch (NoSuchFieldError unused26) {
                    }
                    try {
                        iArr[AccessibilityRole.HEADER.ordinal()] = 27;
                    } catch (NoSuchFieldError unused27) {
                    }
                    try {
                        iArr[AccessibilityRole.ALERT.ordinal()] = 28;
                    } catch (NoSuchFieldError unused28) {
                    }
                    try {
                        iArr[AccessibilityRole.COMBOBOX.ordinal()] = 29;
                    } catch (NoSuchFieldError unused29) {
                    }
                    try {
                        iArr[AccessibilityRole.MENU.ordinal()] = 30;
                    } catch (NoSuchFieldError unused30) {
                    }
                    try {
                        iArr[AccessibilityRole.MENUBAR.ordinal()] = 31;
                    } catch (NoSuchFieldError unused31) {
                    }
                    try {
                        iArr[AccessibilityRole.MENUITEM.ordinal()] = 32;
                    } catch (NoSuchFieldError unused32) {
                    }
                    try {
                        iArr[AccessibilityRole.PROGRESSBAR.ordinal()] = 33;
                    } catch (NoSuchFieldError unused33) {
                    }
                    try {
                        iArr[AccessibilityRole.RADIOGROUP.ordinal()] = 34;
                    } catch (NoSuchFieldError unused34) {
                    }
                    try {
                        iArr[AccessibilityRole.SCROLLBAR.ordinal()] = 35;
                    } catch (NoSuchFieldError unused35) {
                    }
                    try {
                        iArr[AccessibilityRole.TAB.ordinal()] = 36;
                    } catch (NoSuchFieldError unused36) {
                    }
                    try {
                        iArr[AccessibilityRole.TABLIST.ordinal()] = 37;
                    } catch (NoSuchFieldError unused37) {
                    }
                    try {
                        iArr[AccessibilityRole.TIMER.ordinal()] = 38;
                    } catch (NoSuchFieldError unused38) {
                    }
                    try {
                        iArr[AccessibilityRole.TOOLBAR.ordinal()] = 39;
                    } catch (NoSuchFieldError unused39) {
                    }
                    $EnumSwitchMapping$0 = iArr;
                    int[] iArr2 = new int[Role.values().length];
                    try {
                        iArr2[Role.ALERT.ordinal()] = 1;
                    } catch (NoSuchFieldError unused40) {
                    }
                    try {
                        iArr2[Role.BUTTON.ordinal()] = 2;
                    } catch (NoSuchFieldError unused41) {
                    }
                    try {
                        iArr2[Role.CHECKBOX.ordinal()] = 3;
                    } catch (NoSuchFieldError unused42) {
                    }
                    try {
                        iArr2[Role.COMBOBOX.ordinal()] = 4;
                    } catch (NoSuchFieldError unused43) {
                    }
                    try {
                        iArr2[Role.GRID.ordinal()] = 5;
                    } catch (NoSuchFieldError unused44) {
                    }
                    try {
                        iArr2[Role.HEADING.ordinal()] = 6;
                    } catch (NoSuchFieldError unused45) {
                    }
                    try {
                        iArr2[Role.IMG.ordinal()] = 7;
                    } catch (NoSuchFieldError unused46) {
                    }
                    try {
                        iArr2[Role.LINK.ordinal()] = 8;
                    } catch (NoSuchFieldError unused47) {
                    }
                    try {
                        iArr2[Role.LIST.ordinal()] = 9;
                    } catch (NoSuchFieldError unused48) {
                    }
                    try {
                        iArr2[Role.MENU.ordinal()] = 10;
                    } catch (NoSuchFieldError unused49) {
                    }
                    try {
                        iArr2[Role.MENUBAR.ordinal()] = 11;
                    } catch (NoSuchFieldError unused50) {
                    }
                    try {
                        iArr2[Role.MENUITEM.ordinal()] = 12;
                    } catch (NoSuchFieldError unused51) {
                    }
                    try {
                        iArr2[Role.NONE.ordinal()] = 13;
                    } catch (NoSuchFieldError unused52) {
                    }
                    try {
                        iArr2[Role.PROGRESSBAR.ordinal()] = 14;
                    } catch (NoSuchFieldError unused53) {
                    }
                    try {
                        iArr2[Role.RADIO.ordinal()] = 15;
                    } catch (NoSuchFieldError unused54) {
                    }
                    try {
                        iArr2[Role.RADIOGROUP.ordinal()] = 16;
                    } catch (NoSuchFieldError unused55) {
                    }
                    try {
                        iArr2[Role.SCROLLBAR.ordinal()] = 17;
                    } catch (NoSuchFieldError unused56) {
                    }
                    try {
                        iArr2[Role.SEARCHBOX.ordinal()] = 18;
                    } catch (NoSuchFieldError unused57) {
                    }
                    try {
                        iArr2[Role.SLIDER.ordinal()] = 19;
                    } catch (NoSuchFieldError unused58) {
                    }
                    try {
                        iArr2[Role.SPINBUTTON.ordinal()] = 20;
                    } catch (NoSuchFieldError unused59) {
                    }
                    try {
                        iArr2[Role.SUMMARY.ordinal()] = 21;
                    } catch (NoSuchFieldError unused60) {
                    }
                    try {
                        iArr2[Role.SWITCH.ordinal()] = 22;
                    } catch (NoSuchFieldError unused61) {
                    }
                    try {
                        iArr2[Role.TAB.ordinal()] = 23;
                    } catch (NoSuchFieldError unused62) {
                    }
                    try {
                        iArr2[Role.TABLIST.ordinal()] = 24;
                    } catch (NoSuchFieldError unused63) {
                    }
                    try {
                        iArr2[Role.TIMER.ordinal()] = 25;
                    } catch (NoSuchFieldError unused64) {
                    }
                    try {
                        iArr2[Role.TOOLBAR.ordinal()] = 26;
                    } catch (NoSuchFieldError unused65) {
                    }
                    $EnumSwitchMapping$1 = iArr2;
                }
            }

            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            public final AccessibilityRole fromRole(@NotNull Role role) {
                Intrinsics.checkNotNullParameter(role, "role");
                switch (WhenMappings.$EnumSwitchMapping$1[role.ordinal()]) {
                    case 1:
                        return AccessibilityRole.ALERT;
                    case 2:
                        return AccessibilityRole.BUTTON;
                    case 3:
                        return AccessibilityRole.CHECKBOX;
                    case 4:
                        return AccessibilityRole.COMBOBOX;
                    case 5:
                        return AccessibilityRole.GRID;
                    case 6:
                        return AccessibilityRole.HEADER;
                    case 7:
                        return AccessibilityRole.IMAGE;
                    case 8:
                        return AccessibilityRole.LINK;
                    case 9:
                        return AccessibilityRole.LIST;
                    case 10:
                        return AccessibilityRole.MENU;
                    case 11:
                        return AccessibilityRole.MENUBAR;
                    case 12:
                        return AccessibilityRole.MENUITEM;
                    case 13:
                        return AccessibilityRole.NONE;
                    case 14:
                        return AccessibilityRole.PROGRESSBAR;
                    case 15:
                        return AccessibilityRole.RADIO;
                    case 16:
                        return AccessibilityRole.RADIOGROUP;
                    case 17:
                        return AccessibilityRole.SCROLLBAR;
                    case 18:
                        return AccessibilityRole.SEARCH;
                    case 19:
                        return AccessibilityRole.ADJUSTABLE;
                    case 20:
                        return AccessibilityRole.SPINBUTTON;
                    case 21:
                        return AccessibilityRole.SUMMARY;
                    case 22:
                        return AccessibilityRole.SWITCH;
                    case 23:
                        return AccessibilityRole.TAB;
                    case 24:
                        return AccessibilityRole.TABLIST;
                    case 25:
                        return AccessibilityRole.TIMER;
                    case 26:
                        return AccessibilityRole.TOOLBAR;
                    default:
                        return null;
                }
            }

            @NotNull
            public final AccessibilityRole fromValue(String value) {
                if (value == null) {
                    return AccessibilityRole.NONE;
                }
                for (AccessibilityRole accessibilityRole : AccessibilityRole.getEntries()) {
                    if (x.i(accessibilityRole.name(), value, true)) {
                        return accessibilityRole;
                    }
                }
                throw new IllegalArgumentException("Invalid accessibility role value: ".concat(value));
            }

            public final AccessibilityRole fromViewTag(@NotNull View view) {
                Intrinsics.checkNotNullParameter(view, "view");
                Role role = (Role) view.getTag(R.id.role);
                return role != null ? fromRole(role) : (AccessibilityRole) view.getTag(R.id.accessibility_role);
            }

            @NotNull
            public final String getValue(@NotNull AccessibilityRole role) {
                Intrinsics.checkNotNullParameter(role, "role");
                switch (WhenMappings.$EnumSwitchMapping$0[role.ordinal()]) {
                    case 1:
                        return "android.widget.Button";
                    case 2:
                        return "android.widget.Spinner";
                    case 3:
                        return "android.widget.ToggleButton";
                    case 4:
                        return "android.widget.EditText";
                    case 5:
                        return "android.widget.ImageView";
                    case 6:
                        return "android.widget.ImageButton";
                    case 7:
                        return "android.inputmethodservice.Keyboard$Key";
                    case 8:
                        return "android.widget.TextView";
                    case 9:
                        return "android.widget.SeekBar";
                    case 10:
                        return "android.widget.CheckBox";
                    case 11:
                        return "android.widget.RadioButton";
                    case 12:
                        return "android.widget.SpinButton";
                    case 13:
                        return "android.widget.Switch";
                    case 14:
                        return "android.widget.AbsListView";
                    case 15:
                        return "android.widget.GridView";
                    case 16:
                        return "android.widget.ScrollView";
                    case 17:
                        return "android.widget.HorizontalScrollView";
                    case 18:
                        return "androidx.viewpager.widget.ViewPager";
                    case 19:
                        return "androidx.drawerlayout.widget.DrawerLayout";
                    case 20:
                        return "android.widget.SlidingDrawer";
                    case 21:
                        return "com.android.internal.view.menu.IconMenuView";
                    case 22:
                        return "android.view.ViewGroup";
                    case 23:
                        return "android.webkit.WebView";
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case ChatViewRecyclerTypes.POLL_TEXT_AND_IMAGE /* 37 */:
                    case ChatViewRecyclerTypes.POLL_IMAGE_ONLY /* 38 */:
                    case ChatViewRecyclerTypes.SAFETY_SYSTEM_NOTIFICATION /* 39 */:
                        return "android.view.View";
                    default:
                        throw new n();
                }
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ AccessibilityRole[] $values() {
            return new AccessibilityRole[]{NONE, BUTTON, DROPDOWNLIST, TOGGLEBUTTON, LINK, SEARCH, IMAGE, IMAGEBUTTON, KEYBOARDKEY, TEXT, ADJUSTABLE, SUMMARY, HEADER, ALERT, CHECKBOX, COMBOBOX, MENU, MENUBAR, MENUITEM, PROGRESSBAR, RADIO, RADIOGROUP, SCROLLBAR, SPINBUTTON, SWITCH, TAB, TABLIST, TIMER, LIST, GRID, PAGER, SCROLLVIEW, HORIZONTALSCROLLVIEW, VIEWGROUP, WEBVIEW, DRAWERLAYOUT, SLIDINGDRAWER, ICONMENU, TOOLBAR};
        }

        static {
            AccessibilityRole[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
            INSTANCE = new Companion(null);
        }

        private AccessibilityRole(String str, int i5) {
        }

        public static final AccessibilityRole fromRole(@NotNull Role role) {
            return INSTANCE.fromRole(role);
        }

        @NotNull
        public static final AccessibilityRole fromValue(String str) {
            return INSTANCE.fromValue(str);
        }

        public static final AccessibilityRole fromViewTag(@NotNull View view) {
            return INSTANCE.fromViewTag(view);
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        @NotNull
        public static final String getValue(@NotNull AccessibilityRole accessibilityRole) {
            return INSTANCE.getValue(accessibilityRole);
        }

        public static AccessibilityRole valueOf(String str) {
            return (AccessibilityRole) Enum.valueOf(AccessibilityRole.class, str);
        }

        public static AccessibilityRole[] values() {
            return (AccessibilityRole[]) $VALUES.clone();
        }
    }

    @Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010$\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\b\b\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\n\n\u0002\u0010\r\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J \u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\bH\u0007J \u0010\u001b\u001a\u00020\u00152\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u001a\u001a\u00020\bH\u0007J\u0018\u0010\u001c\u001a\u00020\u00152\u0006\u0010\u001d\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020 H\u0002J\"\u0010!\u001a\u00020\u00152\u0006\u0010\"\u001a\u00020\u001e2\b\u0010#\u001a\u0004\u0018\u00010$2\u0006\u0010%\u001a\u00020&H\u0007J\u001c\u0010'\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001e2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0007J\u0012\u0010)\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001eH\u0007J\u0012\u0010*\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001eH\u0002J\u001c\u0010+\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001e2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0007J\u0012\u0010,\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001eH\u0007J\u001c\u0010-\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001e2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0007J\u0012\u0010.\u001a\u00020\u00192\b\u0010(\u001a\u0004\u0018\u00010\u001eH\u0007J\u0014\u0010/\u001a\u0004\u0018\u00010\u001e2\b\u0010\u0016\u001a\u0004\u0018\u00010\u0017H\u0007J\u001c\u00100\u001a\u0004\u0018\u0001012\u0006\u0010\u0016\u001a\u00020\u00172\b\u0010\u001d\u001a\u0004\u0018\u00010\u001eH\u0007J\u0014\u00102\u001a\u00020\u00052\n\u00103\u001a\u000604j\u0002`5H\u0002R\u000e\u0010\u0004\u001a\u00020\u0005X\u0086T¢\u0006\u0002\n\u0000R\u001a\u0010\u0006\u001a\u000e\u0012\u0004\u0012\u00020\u0005\u0012\u0004\u0012\u00020\b0\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u001c\u0010\u000b\u001a\u0010\u0012\u0006\u0012\u0004\u0018\u00010\u0005\u0012\u0004\u0012\u00020\b0\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\bX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u00066"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$Companion;", "", "<init>", "()V", "TOP_ACCESSIBILITY_ACTION_EVENT", "", "actionIdMap", "", "", "TAG", "customActionCounter", "customActionIdMap", "", "TIMEOUT_SEND_ACCESSIBILITY_EVENT", "SEND_EVENT", "delimiter", "delimiterLength", "STATE_DISABLED", "STATE_SELECTED", "STATE_CHECKED", "setDelegate", "", "view", "Landroid/view/View;", "originalFocus", "", "originalImportantForAccessibility", "resetDelegate", "setState", "info", "Landroidx/core/view/accessibility/AccessibilityNodeInfoCompat;", ViewProps.ACCESSIBILITY_STATE, "Lcom/facebook/react/bridge/ReadableMap;", "setRole", "nodeInfo", ViewProps.ROLE, "Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$AccessibilityRole;", "context", "Landroid/content/Context;", "hasNonActionableSpeakingDescendants", "node", "hasValidRangeInfo", "hasStateDescription", "isSpeakingNode", "hasText", "isAccessibilityFocusable", "isActionableForAccessibility", "createNodeInfoFromView", "getTalkbackDescription", "", "removeFinalDelimiter", "builder", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nReactAccessibilityDelegate.kt\nKotlin\n*S Kotlin\n*F\n+ 1 ReactAccessibilityDelegate.kt\ncom/facebook/react/uimanager/ReactAccessibilityDelegate$Companion\n+ 2 _Collections.kt\nkotlin/collections/CollectionsKt___CollectionsKt\n*L\n1#1,1020:1\n1761#2,3:1021\n*S KotlinDebug\n*F\n+ 1 ReactAccessibilityDelegate.kt\ncom/facebook/react/uimanager/ReactAccessibilityDelegate$Companion\n*L\n894#1:1021,3\n*E\n"})
    public static final class Companion {

        @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
        public /* synthetic */ class WhenMappings {
            public static final /* synthetic */ int[] $EnumSwitchMapping$0;

            static {
                int[] iArr = new int[AccessibilityRole.values().length];
                try {
                    iArr[AccessibilityRole.LINK.ordinal()] = 1;
                } catch (NoSuchFieldError unused) {
                }
                try {
                    iArr[AccessibilityRole.IMAGE.ordinal()] = 2;
                } catch (NoSuchFieldError unused2) {
                }
                try {
                    iArr[AccessibilityRole.IMAGEBUTTON.ordinal()] = 3;
                } catch (NoSuchFieldError unused3) {
                }
                try {
                    iArr[AccessibilityRole.BUTTON.ordinal()] = 4;
                } catch (NoSuchFieldError unused4) {
                }
                try {
                    iArr[AccessibilityRole.TOGGLEBUTTON.ordinal()] = 5;
                } catch (NoSuchFieldError unused5) {
                }
                try {
                    iArr[AccessibilityRole.SUMMARY.ordinal()] = 6;
                } catch (NoSuchFieldError unused6) {
                }
                try {
                    iArr[AccessibilityRole.HEADER.ordinal()] = 7;
                } catch (NoSuchFieldError unused7) {
                }
                try {
                    iArr[AccessibilityRole.ALERT.ordinal()] = 8;
                } catch (NoSuchFieldError unused8) {
                }
                try {
                    iArr[AccessibilityRole.COMBOBOX.ordinal()] = 9;
                } catch (NoSuchFieldError unused9) {
                }
                try {
                    iArr[AccessibilityRole.MENU.ordinal()] = 10;
                } catch (NoSuchFieldError unused10) {
                }
                try {
                    iArr[AccessibilityRole.MENUBAR.ordinal()] = 11;
                } catch (NoSuchFieldError unused11) {
                }
                try {
                    iArr[AccessibilityRole.MENUITEM.ordinal()] = 12;
                } catch (NoSuchFieldError unused12) {
                }
                try {
                    iArr[AccessibilityRole.PROGRESSBAR.ordinal()] = 13;
                } catch (NoSuchFieldError unused13) {
                }
                try {
                    iArr[AccessibilityRole.RADIOGROUP.ordinal()] = 14;
                } catch (NoSuchFieldError unused14) {
                }
                try {
                    iArr[AccessibilityRole.SCROLLBAR.ordinal()] = 15;
                } catch (NoSuchFieldError unused15) {
                }
                try {
                    iArr[AccessibilityRole.SPINBUTTON.ordinal()] = 16;
                } catch (NoSuchFieldError unused16) {
                }
                try {
                    iArr[AccessibilityRole.TAB.ordinal()] = 17;
                } catch (NoSuchFieldError unused17) {
                }
                try {
                    iArr[AccessibilityRole.TABLIST.ordinal()] = 18;
                } catch (NoSuchFieldError unused18) {
                }
                try {
                    iArr[AccessibilityRole.TIMER.ordinal()] = 19;
                } catch (NoSuchFieldError unused19) {
                }
                try {
                    iArr[AccessibilityRole.TOOLBAR.ordinal()] = 20;
                } catch (NoSuchFieldError unused20) {
                }
                $EnumSwitchMapping$0 = iArr;
            }
        }

        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        private final boolean hasStateDescription(AccessibilityNodeInfoCompat node) {
            if (node == null) {
                return false;
            }
            AccessibilityNodeInfo accessibilityNodeInfo = node.a;
            CharSequence g6 = Build.VERSION.SDK_INT >= 30 ? d.g(accessibilityNodeInfo) : accessibilityNodeInfo.getExtras().getCharSequence("androidx.view.accessibility.AccessibilityNodeInfoCompat.STATE_DESCRIPTION_KEY");
            return !(g6 == null || g6.length() == 0) || accessibilityNodeInfo.isCheckable() || hasValidRangeInfo(node);
        }

        private final String removeFinalDelimiter(StringBuilder builder) {
            int length = builder.length();
            if (length > 0) {
                builder.delete(length - 2, length);
            }
            String sb2 = builder.toString();
            Intrinsics.checkNotNullExpressionValue(sb2, "toString(...)");
            return sb2;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final void setState(AccessibilityNodeInfoCompat info, ReadableMap accessibilityState) {
            ReadableMapKeySetIterator keySetIterator = accessibilityState.keySetIterator();
            while (keySetIterator.hasNextKey()) {
                String nextKey = keySetIterator.nextKey();
                Dynamic dynamic = accessibilityState.getDynamic(nextKey);
                if (Intrinsics.areEqual(nextKey, ReactAccessibilityDelegate.STATE_SELECTED) && dynamic.getType() == ReadableType.Boolean) {
                    info.a.setSelected(dynamic.asBoolean());
                } else if (Intrinsics.areEqual(nextKey, ReactAccessibilityDelegate.STATE_DISABLED) && dynamic.getType() == ReadableType.Boolean) {
                    info.a.setEnabled(!dynamic.asBoolean());
                } else if (Intrinsics.areEqual(nextKey, ReactAccessibilityDelegate.STATE_CHECKED) && dynamic.getType() == ReadableType.Boolean) {
                    boolean asBoolean = dynamic.asBoolean();
                    info.n(true);
                    info.a.setChecked(asBoolean);
                }
            }
        }

        public final AccessibilityNodeInfoCompat createNodeInfoFromView(View view) {
            if (view == null) {
                return null;
            }
            AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
            AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(obtain);
            try {
                WeakHashMap weakHashMap = s0.a;
                view.onInitializeAccessibilityNodeInfo(obtain);
                return accessibilityNodeInfoCompat;
            } catch (NullPointerException unused) {
                return null;
            }
        }

        public final CharSequence getTalkbackDescription(@NotNull View view, AccessibilityNodeInfoCompat info) {
            Intrinsics.checkNotNullParameter(view, "view");
            AccessibilityNodeInfoCompat createNodeInfoFromView = info == null ? createNodeInfoFromView(view) : new AccessibilityNodeInfoCompat(AccessibilityNodeInfo.obtain(info.a));
            if (createNodeInfoFromView != null) {
                CharSequence contentDescription = createNodeInfoFromView.a.getContentDescription();
                CharSequence i5 = createNodeInfoFromView.i();
                boolean z5 = i5 == null || i5.length() == 0;
                boolean z6 = view instanceof EditText;
                StringBuilder sb2 = new StringBuilder();
                if (contentDescription != null && contentDescription.length() != 0 && (!z6 || z5)) {
                    sb2.append(contentDescription);
                    return sb2;
                }
                if (!z5) {
                    sb2.append(i5);
                    return sb2;
                }
                if (view instanceof ViewGroup) {
                    StringBuilder sb3 = new StringBuilder();
                    ViewGroup viewGroup = (ViewGroup) view;
                    int childCount = viewGroup.getChildCount();
                    for (int i6 = 0; i6 < childCount; i6++) {
                        View childAt = viewGroup.getChildAt(i6);
                        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
                        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(obtain);
                        WeakHashMap weakHashMap = s0.a;
                        childAt.onInitializeAccessibilityNodeInfo(obtain);
                        if (isSpeakingNode(accessibilityNodeInfoCompat, childAt) && !isAccessibilityFocusable(accessibilityNodeInfoCompat, childAt)) {
                            Intrinsics.checkNotNull(childAt);
                            CharSequence talkbackDescription = getTalkbackDescription(childAt, null);
                            if (talkbackDescription != null && talkbackDescription.length() != 0) {
                                sb3.append(((Object) talkbackDescription) + ReactAccessibilityDelegate.delimiter);
                            }
                        }
                    }
                    return removeFinalDelimiter(sb3);
                }
            }
            return null;
        }

        public final boolean hasNonActionableSpeakingDescendants(AccessibilityNodeInfoCompat node, View view) {
            if (node != null && view != null && (view instanceof ViewGroup)) {
                ViewGroup viewGroup = (ViewGroup) view;
                int childCount = viewGroup.getChildCount();
                for (int i5 = 0; i5 < childCount; i5++) {
                    View childAt = viewGroup.getChildAt(i5);
                    if (childAt != null) {
                        AccessibilityNodeInfo obtain = AccessibilityNodeInfo.obtain();
                        AccessibilityNodeInfoCompat accessibilityNodeInfoCompat = new AccessibilityNodeInfoCompat(obtain);
                        WeakHashMap weakHashMap = s0.a;
                        childAt.onInitializeAccessibilityNodeInfo(obtain);
                        if (obtain.isVisibleToUser() && !isAccessibilityFocusable(accessibilityNodeInfoCompat, childAt) && isSpeakingNode(accessibilityNodeInfoCompat, childAt)) {
                            return true;
                        }
                    }
                }
            }
            return false;
        }

        public final boolean hasText(AccessibilityNodeInfoCompat node) {
            l1.c cVar;
            if (node == null) {
                return false;
            }
            AccessibilityNodeInfo accessibilityNodeInfo = node.a;
            AccessibilityNodeInfo.CollectionInfo collectionInfo = accessibilityNodeInfo.getCollectionInfo();
            if (collectionInfo != null) {
                cVar = new l1.c();
                cVar.a = collectionInfo;
            } else {
                cVar = null;
            }
            if (cVar != null) {
                return false;
            }
            CharSequence i5 = node.i();
            if (i5 != null && i5.length() != 0) {
                return true;
            }
            CharSequence contentDescription = accessibilityNodeInfo.getContentDescription();
            if (contentDescription != null && contentDescription.length() != 0) {
                return true;
            }
            CharSequence h6 = node.h();
            return (h6 == null || h6.length() == 0) ? false : true;
        }

        public final boolean hasValidRangeInfo(AccessibilityNodeInfoCompat node) {
            if (node == null) {
                return false;
            }
            AccessibilityNodeInfo.RangeInfo rangeInfo = node.a.getRangeInfo();
            l lVar = rangeInfo != null ? new l(rangeInfo) : null;
            if (lVar == null) {
                return false;
            }
            AccessibilityNodeInfo.RangeInfo rangeInfo2 = (AccessibilityNodeInfo.RangeInfo) lVar.f9613d;
            float max = rangeInfo2.getMax();
            float min = rangeInfo2.getMin();
            float current = rangeInfo2.getCurrent();
            return max - min > 0.0f && current >= min && current <= max;
        }

        public final boolean isAccessibilityFocusable(AccessibilityNodeInfoCompat node, View view) {
            if (node == null || view == null || !node.a.isVisibleToUser()) {
                return false;
            }
            return node.j() || isActionableForAccessibility(node);
        }

        public final boolean isActionableForAccessibility(AccessibilityNodeInfoCompat node) {
            if (node == null) {
                return false;
            }
            AccessibilityNodeInfo accessibilityNodeInfo = node.a;
            if (accessibilityNodeInfo.isClickable() || accessibilityNodeInfo.isLongClickable() || accessibilityNodeInfo.isFocusable()) {
                return true;
            }
            ArrayList d6 = node.d();
            Intrinsics.checkNotNullExpressionValue(d6, "getActionList(...)");
            if (d6.isEmpty()) {
                return false;
            }
            Iterator it = d6.iterator();
            while (it.hasNext()) {
                androidx.core.view.accessibility.a aVar = (androidx.core.view.accessibility.a) it.next();
                if (Intrinsics.areEqual(aVar, androidx.core.view.accessibility.a.f1555g) || Intrinsics.areEqual(aVar, androidx.core.view.accessibility.a.f1556h) || Intrinsics.areEqual(aVar, androidx.core.view.accessibility.a.f1553e)) {
                    return true;
                }
            }
            return false;
        }

        public final boolean isSpeakingNode(AccessibilityNodeInfoCompat node, View view) {
            if (node != null) {
                AccessibilityNodeInfo accessibilityNodeInfo = node.a;
                if (view != null) {
                    WeakHashMap weakHashMap = s0.a;
                    int importantForAccessibility = view.getImportantForAccessibility();
                    if (importantForAccessibility != 4 && (importantForAccessibility != 2 || accessibilityNodeInfo.getChildCount() > 0)) {
                        return hasText(node) || hasStateDescription(node) || accessibilityNodeInfo.isCheckable() || hasNonActionableSpeakingDescendants(node, view);
                    }
                }
            }
            return false;
        }

        public final void resetDelegate(@NotNull View view, boolean originalFocus, int originalImportantForAccessibility) {
            Intrinsics.checkNotNullParameter(view, "view");
            s0.p(view, new ReactAccessibilityDelegate(view, originalFocus, originalImportantForAccessibility));
        }

        public final void setDelegate(@NotNull View view, boolean originalFocus, int originalImportantForAccessibility) {
            Intrinsics.checkNotNullParameter(view, "view");
            if (s0.f(view) != null) {
                return;
            }
            if (view.getTag(R.id.accessibility_role) == null && view.getTag(R.id.accessibility_state) == null && view.getTag(R.id.accessibility_actions) == null && view.getTag(R.id.react_test_id) == null && view.getTag(R.id.accessibility_collection_item) == null && view.getTag(R.id.accessibility_links) == null && view.getTag(R.id.role) == null) {
                return;
            }
            s0.p(view, new ReactAccessibilityDelegate(view, originalFocus, originalImportantForAccessibility));
        }

        public final void setRole(@NotNull AccessibilityNodeInfoCompat nodeInfo, AccessibilityRole role, @NotNull Context context) {
            Intrinsics.checkNotNullParameter(nodeInfo, "nodeInfo");
            Intrinsics.checkNotNullParameter(context, "context");
            if (role == null) {
                role = AccessibilityRole.NONE;
            }
            nodeInfo.o(AccessibilityRole.INSTANCE.getValue(role));
            switch (WhenMappings.$EnumSwitchMapping$0[role.ordinal()]) {
                case 1:
                    nodeInfo.w(context.getString(R.string.link_description));
                    break;
                case 2:
                    nodeInfo.w(context.getString(R.string.image_description));
                    break;
                case 3:
                    nodeInfo.w(context.getString(R.string.imagebutton_description));
                    nodeInfo.p(true);
                    break;
                case 4:
                    nodeInfo.p(true);
                    break;
                case 5:
                    nodeInfo.p(true);
                    nodeInfo.n(true);
                    break;
                case 6:
                    nodeInfo.w(context.getString(R.string.summary_description));
                    break;
                case 7:
                    nodeInfo.t(true);
                    break;
                case 8:
                    nodeInfo.w(context.getString(R.string.alert_description));
                    break;
                case 9:
                    nodeInfo.w(context.getString(R.string.combobox_description));
                    break;
                case 10:
                    nodeInfo.w(context.getString(R.string.menu_description));
                    break;
                case 11:
                    nodeInfo.w(context.getString(R.string.menubar_description));
                    break;
                case 12:
                    nodeInfo.w(context.getString(R.string.menuitem_description));
                    break;
                case 13:
                    nodeInfo.w(context.getString(R.string.progressbar_description));
                    break;
                case 14:
                    nodeInfo.w(context.getString(R.string.radiogroup_description));
                    break;
                case 15:
                    nodeInfo.w(context.getString(R.string.scrollbar_description));
                    break;
                case 16:
                    nodeInfo.w(context.getString(R.string.spinbutton_description));
                    break;
                case 17:
                    nodeInfo.w(context.getString(R.string.rn_tab_description));
                    break;
                case 18:
                    nodeInfo.w(context.getString(R.string.tablist_description));
                    break;
                case 19:
                    nodeInfo.w(context.getString(R.string.timer_description));
                    break;
                case 20:
                    nodeInfo.w(context.getString(R.string.toolbar_description));
                    break;
            }
        }

        private Companion() {
        }
    }

    /* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
    /* JADX WARN: Unknown enum class pattern. Please report as an issue! */
    @Metadata(d1 = {"\u0000\f\n\u0002\u0018\u0002\n\u0002\u0010\u0010\n\u0002\bE\b\u0086\u0081\u0002\u0018\u0000 E2\b\u0012\u0004\u0012\u00020\u00000\u0001:\u0001EB\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003j\u0002\b\u0004j\u0002\b\u0005j\u0002\b\u0006j\u0002\b\u0007j\u0002\b\bj\u0002\b\tj\u0002\b\nj\u0002\b\u000bj\u0002\b\fj\u0002\b\rj\u0002\b\u000ej\u0002\b\u000fj\u0002\b\u0010j\u0002\b\u0011j\u0002\b\u0012j\u0002\b\u0013j\u0002\b\u0014j\u0002\b\u0015j\u0002\b\u0016j\u0002\b\u0017j\u0002\b\u0018j\u0002\b\u0019j\u0002\b\u001aj\u0002\b\u001bj\u0002\b\u001cj\u0002\b\u001dj\u0002\b\u001ej\u0002\b\u001fj\u0002\b j\u0002\b!j\u0002\b\"j\u0002\b#j\u0002\b$j\u0002\b%j\u0002\b&j\u0002\b'j\u0002\b(j\u0002\b)j\u0002\b*j\u0002\b+j\u0002\b,j\u0002\b-j\u0002\b.j\u0002\b/j\u0002\b0j\u0002\b1j\u0002\b2j\u0002\b3j\u0002\b4j\u0002\b5j\u0002\b6j\u0002\b7j\u0002\b8j\u0002\b9j\u0002\b:j\u0002\b;j\u0002\b<j\u0002\b=j\u0002\b>j\u0002\b?j\u0002\b@j\u0002\bAj\u0002\bBj\u0002\bCj\u0002\bD¨\u0006F"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$Role;", "", "<init>", "(Ljava/lang/String;I)V", "ALERT", "ALERTDIALOG", "APPLICATION", "ARTICLE", "BANNER", "BUTTON", "CELL", "CHECKBOX", "COLUMNHEADER", "COMBOBOX", "COMPLEMENTARY", "CONTENTINFO", "DEFINITION", "DIALOG", "DIRECTORY", "DOCUMENT", "FEED", "FIGURE", "FORM", "GRID", "GROUP", "HEADING", "IMG", "LINK", "LIST", "LISTITEM", "LOG", "MAIN", "MARQUEE", "MATH", "MENU", "MENUBAR", "MENUITEM", "METER", "NAVIGATION", "NONE", "NOTE", "OPTION", "PRESENTATION", "PROGRESSBAR", "RADIO", "RADIOGROUP", "REGION", "ROW", "ROWGROUP", "ROWHEADER", "SCROLLBAR", "SEARCHBOX", "SEPARATOR", "SLIDER", "SPINBUTTON", "STATUS", "SUMMARY", "SWITCH", "TAB", "TABLE", "TABLIST", "TABPANEL", "TERM", "TIMER", "TOOLBAR", "TOOLTIP", "TREE", "TREEGRID", "TREEITEM", "Companion", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
    public static final class Role {
        private static final /* synthetic */ EnumEntries $ENTRIES;
        private static final /* synthetic */ Role[] $VALUES;

        /* renamed from: Companion, reason: from kotlin metadata */
        @NotNull
        public static final Companion INSTANCE;
        public static final Role ALERT = new Role("ALERT", 0);
        public static final Role ALERTDIALOG = new Role("ALERTDIALOG", 1);
        public static final Role APPLICATION = new Role("APPLICATION", 2);
        public static final Role ARTICLE = new Role("ARTICLE", 3);
        public static final Role BANNER = new Role("BANNER", 4);
        public static final Role BUTTON = new Role("BUTTON", 5);
        public static final Role CELL = new Role("CELL", 6);
        public static final Role CHECKBOX = new Role("CHECKBOX", 7);
        public static final Role COLUMNHEADER = new Role("COLUMNHEADER", 8);
        public static final Role COMBOBOX = new Role("COMBOBOX", 9);
        public static final Role COMPLEMENTARY = new Role("COMPLEMENTARY", 10);
        public static final Role CONTENTINFO = new Role("CONTENTINFO", 11);
        public static final Role DEFINITION = new Role("DEFINITION", 12);
        public static final Role DIALOG = new Role("DIALOG", 13);
        public static final Role DIRECTORY = new Role("DIRECTORY", 14);
        public static final Role DOCUMENT = new Role("DOCUMENT", 15);
        public static final Role FEED = new Role("FEED", 16);
        public static final Role FIGURE = new Role("FIGURE", 17);
        public static final Role FORM = new Role("FORM", 18);
        public static final Role GRID = new Role("GRID", 19);
        public static final Role GROUP = new Role("GROUP", 20);
        public static final Role HEADING = new Role("HEADING", 21);
        public static final Role IMG = new Role("IMG", 22);
        public static final Role LINK = new Role("LINK", 23);
        public static final Role LIST = new Role("LIST", 24);
        public static final Role LISTITEM = new Role("LISTITEM", 25);
        public static final Role LOG = new Role("LOG", 26);
        public static final Role MAIN = new Role("MAIN", 27);
        public static final Role MARQUEE = new Role("MARQUEE", 28);
        public static final Role MATH = new Role("MATH", 29);
        public static final Role MENU = new Role("MENU", 30);
        public static final Role MENUBAR = new Role("MENUBAR", 31);
        public static final Role MENUITEM = new Role("MENUITEM", 32);
        public static final Role METER = new Role("METER", 33);
        public static final Role NAVIGATION = new Role("NAVIGATION", 34);
        public static final Role NONE = new Role("NONE", 35);
        public static final Role NOTE = new Role("NOTE", 36);
        public static final Role OPTION = new Role("OPTION", 37);
        public static final Role PRESENTATION = new Role("PRESENTATION", 38);
        public static final Role PROGRESSBAR = new Role("PROGRESSBAR", 39);
        public static final Role RADIO = new Role("RADIO", 40);
        public static final Role RADIOGROUP = new Role("RADIOGROUP", 41);
        public static final Role REGION = new Role("REGION", 42);
        public static final Role ROW = new Role("ROW", 43);
        public static final Role ROWGROUP = new Role("ROWGROUP", 44);
        public static final Role ROWHEADER = new Role("ROWHEADER", 45);
        public static final Role SCROLLBAR = new Role("SCROLLBAR", 46);
        public static final Role SEARCHBOX = new Role("SEARCHBOX", 47);
        public static final Role SEPARATOR = new Role("SEPARATOR", 48);
        public static final Role SLIDER = new Role("SLIDER", 49);
        public static final Role SPINBUTTON = new Role("SPINBUTTON", 50);
        public static final Role STATUS = new Role("STATUS", 51);
        public static final Role SUMMARY = new Role("SUMMARY", 52);
        public static final Role SWITCH = new Role("SWITCH", 53);
        public static final Role TAB = new Role("TAB", 54);
        public static final Role TABLE = new Role("TABLE", 55);
        public static final Role TABLIST = new Role("TABLIST", 56);
        public static final Role TABPANEL = new Role("TABPANEL", 57);
        public static final Role TERM = new Role("TERM", 58);
        public static final Role TIMER = new Role("TIMER", 59);
        public static final Role TOOLBAR = new Role("TOOLBAR", 60);
        public static final Role TOOLTIP = new Role("TOOLTIP", 61);
        public static final Role TREE = new Role("TREE", 62);
        public static final Role TREEGRID = new Role("TREEGRID", 63);
        public static final Role TREEITEM = new Role("TREEITEM", 64);

        @Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u0014\u0010\u0004\u001a\u0004\u0018\u00010\u00052\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007H\u0007¨\u0006\b"}, d2 = {"Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$Role$Companion;", "", "<init>", "()V", "fromValue", "Lcom/facebook/react/uimanager/ReactAccessibilityDelegate$Role;", "value", "", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
        public static final class Companion {
            public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
                this();
            }

            public final Role fromValue(String value) {
                for (Role role : Role.getEntries()) {
                    if (x.i(role.name(), value, true)) {
                        return role;
                    }
                }
                return null;
            }

            private Companion() {
            }
        }

        private static final /* synthetic */ Role[] $values() {
            return new Role[]{ALERT, ALERTDIALOG, APPLICATION, ARTICLE, BANNER, BUTTON, CELL, CHECKBOX, COLUMNHEADER, COMBOBOX, COMPLEMENTARY, CONTENTINFO, DEFINITION, DIALOG, DIRECTORY, DOCUMENT, FEED, FIGURE, FORM, GRID, GROUP, HEADING, IMG, LINK, LIST, LISTITEM, LOG, MAIN, MARQUEE, MATH, MENU, MENUBAR, MENUITEM, METER, NAVIGATION, NONE, NOTE, OPTION, PRESENTATION, PROGRESSBAR, RADIO, RADIOGROUP, REGION, ROW, ROWGROUP, ROWHEADER, SCROLLBAR, SEARCHBOX, SEPARATOR, SLIDER, SPINBUTTON, STATUS, SUMMARY, SWITCH, TAB, TABLE, TABLIST, TABPANEL, TERM, TIMER, TOOLBAR, TOOLTIP, TREE, TREEGRID, TREEITEM};
        }

        static {
            Role[] $values = $values();
            $VALUES = $values;
            $ENTRIES = ki.b.p($values);
            INSTANCE = new Companion(null);
        }

        private Role(String str, int i5) {
        }

        public static final Role fromValue(String str) {
            return INSTANCE.fromValue(str);
        }

        @NotNull
        public static EnumEntries getEntries() {
            return $ENTRIES;
        }

        public static Role valueOf(String str) {
            return (Role) Enum.valueOf(Role.class, str);
        }

        public static Role[] values() {
            return (Role[]) $VALUES.clone();
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public ReactAccessibilityDelegate(@NotNull View hostView, boolean z5, int i5) {
        super(hostView);
        Intrinsics.checkNotNullParameter(hostView, "hostView");
        this.hostView = hostView;
        this.accessibilityEventHandler = new Handler() { // from class: com.facebook.react.uimanager.ReactAccessibilityDelegate$accessibilityEventHandler$1
            @Override // android.os.Handler
            public void handleMessage(Message msg) {
                Intrinsics.checkNotNullParameter(msg, "msg");
                View view = (View) msg.obj;
                if (view != null) {
                    view.sendAccessibilityEvent(4);
                }
            }
        };
        this.accessibilityActionsMap = new HashMap<>();
        hostView.setFocusable(z5);
        hostView.setImportantForAccessibility(i5);
    }

    public static final AccessibilityNodeInfoCompat createNodeInfoFromView(View view) {
        return INSTANCE.createNodeInfoFromView(view);
    }

    private static /* synthetic */ void getAccessibilityEventHandler$annotations() {
    }

    public static final CharSequence getTalkbackDescription(@NotNull View view, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        return INSTANCE.getTalkbackDescription(view, accessibilityNodeInfoCompat);
    }

    public static final boolean hasNonActionableSpeakingDescendants(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat, View view) {
        return INSTANCE.hasNonActionableSpeakingDescendants(accessibilityNodeInfoCompat, view);
    }

    public static final boolean hasText(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        return INSTANCE.hasText(accessibilityNodeInfoCompat);
    }

    public static final boolean hasValidRangeInfo(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        return INSTANCE.hasValidRangeInfo(accessibilityNodeInfoCompat);
    }

    public static final boolean isAccessibilityFocusable(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat, View view) {
        return INSTANCE.isAccessibilityFocusable(accessibilityNodeInfoCompat, view);
    }

    public static final boolean isActionableForAccessibility(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat) {
        return INSTANCE.isActionableForAccessibility(accessibilityNodeInfoCompat);
    }

    public static final boolean isSpeakingNode(AccessibilityNodeInfoCompat accessibilityNodeInfoCompat, View view) {
        return INSTANCE.isSpeakingNode(accessibilityNodeInfoCompat, view);
    }

    public static final void resetDelegate(@NotNull View view, boolean z5, int i5) {
        INSTANCE.resetDelegate(view, z5, i5);
    }

    private final void scheduleAccessibilityEventSender(View host) {
        if (this.accessibilityEventHandler.hasMessages(1, host)) {
            this.accessibilityEventHandler.removeMessages(1, host);
        }
        Message obtainMessage = this.accessibilityEventHandler.obtainMessage(1, host);
        Intrinsics.checkNotNullExpressionValue(obtainMessage, "obtainMessage(...)");
        this.accessibilityEventHandler.sendMessageDelayed(obtainMessage, 200L);
    }

    public static final void setDelegate(@NotNull View view, boolean z5, int i5) {
        INSTANCE.setDelegate(view, z5, i5);
    }

    public static final void setRole(@NotNull AccessibilityNodeInfoCompat accessibilityNodeInfoCompat, AccessibilityRole accessibilityRole, @NotNull Context context) {
        INSTANCE.setRole(accessibilityNodeInfoCompat, accessibilityRole, context);
    }

    @Override // androidx.customview.widget.a, androidx.core.view.b
    public AccessibilityNodeProviderCompat getAccessibilityNodeProvider(@NotNull View host) {
        Intrinsics.checkNotNullParameter(host, "host");
        return null;
    }

    @NotNull
    public final View getHostView() {
        return this.hostView;
    }

    @Override // androidx.customview.widget.a
    public int getVirtualViewAt(float x5, float y5) {
        return Integer.MIN_VALUE;
    }

    @Override // androidx.customview.widget.a
    public void getVisibleVirtualViews(@NotNull List<Integer> virtualViewIds) {
        Intrinsics.checkNotNullParameter(virtualViewIds, "virtualViewIds");
    }

    @Override // androidx.customview.widget.a, androidx.core.view.b
    public void onInitializeAccessibilityEvent(@NotNull View host, @NotNull AccessibilityEvent event) {
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(event, "event");
        super.onInitializeAccessibilityEvent(host, event);
        ReadableMap readableMap = (ReadableMap) host.getTag(R.id.accessibility_value);
        if (readableMap != null && readableMap.hasKey("min") && readableMap.hasKey("now") && readableMap.hasKey("max")) {
            Dynamic dynamic = readableMap.getDynamic("min");
            Dynamic dynamic2 = readableMap.getDynamic("now");
            Dynamic dynamic3 = readableMap.getDynamic("max");
            ReadableType type = dynamic.getType();
            ReadableType readableType = ReadableType.Number;
            if (type == readableType && dynamic2.getType() == readableType && dynamic3.getType() == readableType) {
                int asInt = dynamic.asInt();
                int asInt2 = dynamic2.asInt();
                int asInt3 = dynamic3.asInt();
                if (asInt3 <= asInt || asInt2 < asInt || asInt3 < asInt2) {
                    return;
                }
                event.setItemCount(asInt3 - asInt);
                event.setCurrentItemIndex(asInt2);
            }
        }
    }

    @Override // androidx.customview.widget.a, androidx.core.view.b
    public void onInitializeAccessibilityNodeInfo(@NotNull View host, @NotNull AccessibilityNodeInfoCompat info) {
        String str;
        int intValue;
        Intrinsics.checkNotNullParameter(host, "host");
        Intrinsics.checkNotNullParameter(info, "info");
        super.onInitializeAccessibilityNodeInfo(host, info);
        if (host.getTag(R.id.accessibility_state_expanded) != null) {
            Object tag = host.getTag(R.id.accessibility_state_expanded);
            Intrinsics.checkNotNull(tag, "null cannot be cast to non-null type kotlin.Boolean");
            info.a(((Boolean) tag).booleanValue() ? KeyCommandDescriptor.ModifierFlags.ALTERNATE : KeyCommandDescriptor.ModifierFlags.CONTROL);
        }
        AccessibilityRole fromViewTag = AccessibilityRole.INSTANCE.fromViewTag(host);
        String str2 = (String) host.getTag(R.id.accessibility_hint);
        if (fromViewTag != null) {
            Companion companion = INSTANCE;
            Context context = host.getContext();
            Intrinsics.checkNotNullExpressionValue(context, "getContext(...)");
            companion.setRole(info, fromViewTag, context);
        }
        if (str2 != null) {
            info.B(str2);
        }
        Object tag2 = host.getTag(R.id.labelled_by);
        if (tag2 != null) {
            View rootView = host.getRootView();
            Intrinsics.checkNotNullExpressionValue(rootView, "getRootView(...)");
            View findView = ReactFindViewUtil.findView(rootView, (String) tag2);
            this.accessibilityLabelledBy = findView;
            if (findView != null) {
                info.a.setLabeledBy(findView);
            }
        }
        ReadableMap readableMap = (ReadableMap) host.getTag(R.id.accessibility_state);
        if (readableMap != null) {
            INSTANCE.setState(info, readableMap);
        }
        ReadableArray readableArray = (ReadableArray) host.getTag(R.id.accessibility_actions);
        ReadableMap readableMap2 = (ReadableMap) host.getTag(R.id.accessibility_collection_item);
        if (readableMap2 != null) {
            info.a.setCollectionItemInfo(AccessibilityNodeInfo.CollectionItemInfo.obtain(readableMap2.getInt("rowIndex"), readableMap2.getInt("rowSpan"), readableMap2.getInt("columnIndex"), readableMap2.getInt("columnSpan"), readableMap2.getBoolean("heading")));
        }
        if (readableArray != null) {
            int size = readableArray.size();
            for (int i5 = 0; i5 < size; i5++) {
                ReadableMap map = readableArray.getMap(i5);
                if (map == null || !map.hasKey(StackTraceHelper.NAME_KEY)) {
                    throw new IllegalArgumentException("Unknown accessibility action.");
                }
                String string = map.getString(StackTraceHelper.NAME_KEY);
                if (map.hasKey("label")) {
                    str = map.getString("label");
                    io.sentry.config.a.f(str);
                } else {
                    str = "";
                }
                Integer num = actionIdMap.get(string);
                if (num != null) {
                    intValue = num.intValue();
                } else {
                    Map<String, Integer> map2 = customActionIdMap;
                    Integer num2 = map2.get(string);
                    if (num2 == null) {
                        int i6 = customActionCounter;
                        customActionCounter = i6 + 1;
                        num2 = Integer.valueOf(i6);
                        map2.put(string, num2);
                    }
                    intValue = num2.intValue();
                }
                this.accessibilityActionsMap.put(Integer.valueOf(intValue), string);
                info.b(new androidx.core.view.accessibility.a(intValue, str));
            }
        }
        ReadableMap readableMap3 = (ReadableMap) host.getTag(R.id.accessibility_value);
        if (readableMap3 != null && readableMap3.hasKey("min") && readableMap3.hasKey("now") && readableMap3.hasKey("max")) {
            Dynamic dynamic = readableMap3.getDynamic("min");
            Dynamic dynamic2 = readableMap3.getDynamic("now");
            Dynamic dynamic3 = readableMap3.getDynamic("max");
            ReadableType type = dynamic.getType();
            ReadableType readableType = ReadableType.Number;
            if (type == readableType && dynamic2.getType() == readableType && dynamic3.getType() == readableType) {
                int asInt = dynamic.asInt();
                int asInt2 = dynamic2.asInt();
                int asInt3 = dynamic3.asInt();
                if (asInt3 > asInt && asInt2 >= asInt && asInt3 >= asInt2) {
                    info.a.setRangeInfo(AccessibilityNodeInfo.RangeInfo.obtain(0, asInt, asInt3, asInt2));
                }
            }
        }
        String str3 = (String) host.getTag(R.id.react_test_id);
        if (str3 != null) {
            info.a.setViewIdResourceName(str3);
        }
        CharSequence contentDescription = info.a.getContentDescription();
        boolean z5 = contentDescription == null || contentDescription.length() == 0;
        CharSequence i10 = info.i();
        boolean z6 = z5 && (i10 == null || i10.length() == 0);
        boolean z7 = (readableArray == null && readableMap == null && tag2 == null && fromViewTag == null) ? false : true;
        if (z6 && z7) {
            info.s(INSTANCE.getTalkbackDescription(host, info));
        }
    }

    @Override // androidx.customview.widget.a
    public boolean onPerformActionForVirtualView(int virtualViewId, int action, Bundle arguments) {
        return false;
    }

    @Override // androidx.customview.widget.a
    public void onPopulateNodeForVirtualView(int virtualViewId, @NotNull AccessibilityNodeInfoCompat node) {
        Intrinsics.checkNotNullParameter(node, "node");
        node.s("");
        node.m(new Rect(0, 0, 1, 1));
    }

    @Override // androidx.core.view.b
    public boolean performAccessibilityAction(@NotNull View host, int action, Bundle args) {
        Intrinsics.checkNotNullParameter(host, "host");
        if (action == 524288) {
            host.setTag(R.id.accessibility_state_expanded, Boolean.FALSE);
        }
        if (action == 262144) {
            host.setTag(R.id.accessibility_state_expanded, Boolean.TRUE);
        }
        if (!this.accessibilityActionsMap.containsKey(Integer.valueOf(action))) {
            return super.performAccessibilityAction(host, action, args);
        }
        WritableMap createMap = Arguments.createMap();
        createMap.putString("actionName", this.accessibilityActionsMap.get(Integer.valueOf(action)));
        Context context = host.getContext();
        Intrinsics.checkNotNull(context, "null cannot be cast to non-null type com.facebook.react.bridge.ReactContext");
        ReactContext reactContext = (ReactContext) context;
        if (reactContext.hasActiveReactInstance()) {
            int id2 = host.getId();
            int surfaceId = UIManagerHelper.getSurfaceId(reactContext);
            UIManager uIManager = UIManagerHelper.getUIManager(reactContext, 2);
            if (uIManager != null) {
                uIManager.getEventDispatcher().dispatchEvent(new AccessibilityActionEvent(createMap, surfaceId, id2));
            }
        } else {
            ReactSoftExceptionLogger.logSoftException(TAG, new ReactNoCrashSoftException("Cannot get RCTEventEmitter, no CatalystInstance"));
        }
        AccessibilityRole accessibilityRole = (AccessibilityRole) host.getTag(R.id.accessibility_role);
        ReadableMap readableMap = (ReadableMap) host.getTag(R.id.accessibility_value);
        if (accessibilityRole != AccessibilityRole.ADJUSTABLE) {
            return true;
        }
        if (action != androidx.core.view.accessibility.a.f1557i.a() && action != androidx.core.view.accessibility.a.j.a()) {
            return true;
        }
        if (readableMap != null && !readableMap.hasKey("text")) {
            scheduleAccessibilityEventSender(host);
        }
        return super.performAccessibilityAction(host, action, args);
    }

    public final AccessibilityNodeProviderCompat superGetAccessibilityNodeProvider(@NotNull View host) {
        Intrinsics.checkNotNullParameter(host, "host");
        return super.getAccessibilityNodeProvider(host);
    }
}
