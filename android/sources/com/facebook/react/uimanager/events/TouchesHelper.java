package com.facebook.react.uimanager.events;

import android.os.Trace;
import android.view.MotionEvent;
import com.facebook.react.bridge.Arguments;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.uimanager.PixelUtil;
import fo.d;
import fo.n;
import java.util.Iterator;
import kotlin.Metadata;
import kotlin.jvm.internal.ArrayIteratorKt;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u000b\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\bÀ\u0002\u0018\u00002\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0002\u0010\u0003J\u001d\u0010\u0010\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00120\u00112\u0006\u0010\u0013\u001a\u00020\u0014H\u0002¢\u0006\u0002\u0010\u0015J\u0018\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u0013\u001a\u00020\u0014H\u0007J%\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001d2\u000e\u0010\u001e\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00120\u0011H\u0002¢\u0006\u0002\u0010\u001fR\u0016\u0010\u0004\u001a\u00020\u00058\u0006X\u0087D¢\u0006\b\n\u0000\u0012\u0004\b\u0006\u0010\u0003R\u000e\u0010\u0007\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0005X\u0082T¢\u0006\u0002\n\u0000¨\u0006 "}, d2 = {"Lcom/facebook/react/uimanager/events/TouchesHelper;", "", "<init>", "()V", "TARGET_KEY", "", "getTARGET_KEY$annotations", "TARGET_SURFACE_KEY", "CHANGED_TOUCHES_KEY", "TOUCHES_KEY", "PAGE_X_KEY", "PAGE_Y_KEY", "TIMESTAMP_KEY", "POINTER_IDENTIFIER_KEY", "LOCATION_X_KEY", "LOCATION_Y_KEY", "createPointersArray", "", "Lcom/facebook/react/bridge/WritableMap;", "event", "Lcom/facebook/react/uimanager/events/TouchEvent;", "(Lcom/facebook/react/uimanager/events/TouchEvent;)[Lcom/facebook/react/bridge/WritableMap;", "sendTouchEvent", "", "eventEmitter", "Lcom/facebook/react/uimanager/events/RCTModernEventEmitter;", "getWritableArray", "Lcom/facebook/react/bridge/WritableArray;", "copyObjects", "", "objects", "(Z[Lcom/facebook/react/bridge/WritableMap;)Lcom/facebook/react/bridge/WritableArray;", "ReactAndroid_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class TouchesHelper {

    @NotNull
    private static final String CHANGED_TOUCHES_KEY = "changedTouches";

    @NotNull
    private static final String LOCATION_X_KEY = "locationX";

    @NotNull
    private static final String LOCATION_Y_KEY = "locationY";

    @NotNull
    private static final String PAGE_X_KEY = "pageX";

    @NotNull
    private static final String PAGE_Y_KEY = "pageY";

    @NotNull
    private static final String POINTER_IDENTIFIER_KEY = "identifier";

    @NotNull
    private static final String TARGET_SURFACE_KEY = "targetSurface";

    @NotNull
    private static final String TIMESTAMP_KEY = "timestamp";

    @NotNull
    private static final String TOUCHES_KEY = "touches";

    @NotNull
    public static final TouchesHelper INSTANCE = new TouchesHelper();

    @NotNull
    public static final String TARGET_KEY = "target";

    @Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
    public /* synthetic */ class WhenMappings {
        public static final /* synthetic */ int[] $EnumSwitchMapping$0;

        static {
            int[] iArr = new int[TouchEventType.values().length];
            try {
                iArr[TouchEventType.START.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                iArr[TouchEventType.END.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                iArr[TouchEventType.MOVE.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                iArr[TouchEventType.CANCEL.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            $EnumSwitchMapping$0 = iArr;
        }
    }

    private TouchesHelper() {
    }

    private final WritableMap[] createPointersArray(TouchEvent event) {
        MotionEvent motionEvent = event.getMotionEvent();
        WritableMap[] writableMapArr = new WritableMap[motionEvent.getPointerCount()];
        float x5 = motionEvent.getX() - event.getViewX();
        float y5 = motionEvent.getY() - event.getViewY();
        int pointerCount = motionEvent.getPointerCount();
        for (int i5 = 0; i5 < pointerCount; i5++) {
            WritableMap createMap = Arguments.createMap();
            PixelUtil pixelUtil = PixelUtil.INSTANCE;
            createMap.putDouble(PAGE_X_KEY, pixelUtil.pxToDp(motionEvent.getX(i5)));
            createMap.putDouble(PAGE_Y_KEY, pixelUtil.pxToDp(motionEvent.getY(i5)));
            float x10 = motionEvent.getX(i5) - x5;
            float y6 = motionEvent.getY(i5) - y5;
            createMap.putDouble(LOCATION_X_KEY, pixelUtil.pxToDp(x10));
            createMap.putDouble(LOCATION_Y_KEY, pixelUtil.pxToDp(y6));
            createMap.putInt(TARGET_SURFACE_KEY, event.getSurfaceId());
            createMap.putInt(TARGET_KEY, event.getViewTag());
            createMap.putDouble(TIMESTAMP_KEY, event.getTimestampMs());
            createMap.putDouble(POINTER_IDENTIFIER_KEY, motionEvent.getPointerId(i5));
            writableMapArr[i5] = createMap;
        }
        return writableMapArr;
    }

    @d
    public static /* synthetic */ void getTARGET_KEY$annotations() {
    }

    private final WritableArray getWritableArray(boolean copyObjects, WritableMap[] objects) {
        WritableArray createArray = Arguments.createArray();
        for (WritableMap writableMap : objects) {
            if (writableMap != null) {
                if (copyObjects) {
                    writableMap = writableMap.copy();
                }
                createArray.pushMap(writableMap);
            }
        }
        return createArray;
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x0099 A[Catch: all -> 0x00df, TryCatch #0 {all -> 0x00df, blocks: (B:3:0x0028, B:11:0x004c, B:12:0x008f, B:13:0x0093, B:15:0x0099, B:17:0x00a1, B:18:0x00bc, B:25:0x0051, B:26:0x0056, B:27:0x0057, B:28:0x005a, B:30:0x005d, B:32:0x0061, B:34:0x0067, B:39:0x006e, B:40:0x007b, B:42:0x0083, B:43:0x0089), top: B:2:0x0028 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final void sendTouchEvent(@NotNull RCTModernEventEmitter eventEmitter, @NotNull TouchEvent event) {
        WritableMap[] writableMapArr;
        WritableMap[] writableMapArr2;
        Iterator it;
        WritableMap writableMap;
        RCTModernEventEmitter eventEmitter2 = eventEmitter;
        Intrinsics.checkNotNullParameter(eventEmitter2, "eventEmitter");
        Intrinsics.checkNotNullParameter(event, "event");
        d9.a.e("TouchesHelper.sentTouchEventModern(" + event.getName() + ")");
        try {
            TouchEventType touchEventType = event.getTouchEventType();
            MotionEvent motionEvent = event.getMotionEvent();
            WritableMap[] createPointersArray = INSTANCE.createPointersArray(event);
            int i5 = WhenMappings.$EnumSwitchMapping$0[touchEventType.ordinal()];
            if (i5 == 1) {
                WritableMap writableMap2 = createPointersArray[motionEvent.getActionIndex()];
                writableMapArr = new WritableMap[]{writableMap2 != null ? writableMap2.copy() : null};
            } else if (i5 == 2) {
                int actionIndex = motionEvent.getActionIndex();
                WritableMap writableMap3 = createPointersArray[actionIndex];
                createPointersArray[actionIndex] = null;
                writableMapArr = new WritableMap[]{writableMap3};
            } else {
                if (i5 != 3) {
                    if (i5 != 4) {
                        throw new n();
                    }
                    writableMapArr2 = new WritableMap[0];
                    writableMapArr = createPointersArray;
                    it = ArrayIteratorKt.iterator(writableMapArr);
                    while (it.hasNext()) {
                        WritableMap writableMap4 = (WritableMap) it.next();
                        if (writableMap4 != null) {
                            WritableMap copy = writableMap4.copy();
                            TouchesHelper touchesHelper = INSTANCE;
                            WritableArray writableArray = touchesHelper.getWritableArray(true, writableMapArr);
                            WritableArray writableArray2 = touchesHelper.getWritableArray(true, writableMapArr2);
                            copy.putArray(CHANGED_TOUCHES_KEY, writableArray);
                            copy.putArray(TOUCHES_KEY, writableArray2);
                            writableMap = copy;
                        } else {
                            writableMap = null;
                        }
                        eventEmitter2.receiveEvent(event.getSurfaceId(), event.getViewTag(), event.getName(), event.canCoalesce(), 0, writableMap, event.getEventCategory(), event.getTimestampMs());
                        eventEmitter2 = eventEmitter;
                    }
                }
                writableMapArr = new WritableMap[createPointersArray.length];
                for (int i6 = 0; i6 < createPointersArray.length; i6++) {
                    WritableMap writableMap5 = createPointersArray[i6];
                    writableMapArr[i6] = writableMap5 != null ? writableMap5.copy() : null;
                }
            }
            writableMapArr2 = createPointersArray;
            it = ArrayIteratorKt.iterator(writableMapArr);
            while (it.hasNext()) {
            }
        } finally {
            Trace.endSection();
        }
    }
}
